#include <stdio.h>

void dutchFlagSort(int arr[], int n) {
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high) {
        if (arr[mid] == 0) {
            int temp = arr[low];
            arr[low++] = arr[mid];
            arr[mid++] = temp;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            int temp = arr[mid];
            arr[mid] = arr[high];
            arr[high--] = temp;
        }
    }
}

int main() {
    int arr[] = {2, 0, 1, 2, 1, 0}, n = 6;
    dutchFlagSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
