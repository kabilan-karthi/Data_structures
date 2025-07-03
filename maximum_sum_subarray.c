#include <stdio.h>

int maxSubArraySum(int arr[], int n) {
    int max = arr[0];
    int currMax = arr[0];

    for (int i = 1; i < n; i++) {
        currMax = (arr[i] > currMax + arr[i]) ? arr[i] : currMax + arr[i];
        max = (max > currMax) ? max : currMax;
    }

    return maxSoFar;
}

int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxSum = maxSubArraySum(arr, n);
    printf("Maximum sum subarray is %d\n", maxSum);

    return 0;
}
