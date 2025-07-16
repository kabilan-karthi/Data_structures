#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int findGCD(int arr[], int size) {
    int result = arr[0];
    for (int i = 1; i < size; i++) {
        result = gcd(result, arr[i]);
    }
    return result;
}

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int minDeletions(int nums[], int numsSize, int numsDivide[], int divideSize) {
    int targetGCD = findGCD(numsDivide, divideSize);
    qsort(nums, numsSize, sizeof(int), compare);

    for (int i = 0; i < numsSize; i++) {
        if (targetGCD % nums[i] == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    int nums[] = {2, 2, 3, 3,4};
    int numsDivide[] = {3, 6,9,12,15};
    int result = minDeletions(nums, 4, numsDivide, 3);
    printf("Minimum deletions needed: %d\n", result);
    return 0;
}
