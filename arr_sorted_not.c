#include <stdio.h>
#include <stdbool.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool isSorted = true;

    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1]) {
            isSorted = false;
            break;
        }
    }

    if (isSorted)
        printf("The array is sorted in non-decreasing order.\n");
    else
        printf("The array is not sorted.\n");

    return 0;
}
