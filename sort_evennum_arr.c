#include <stdio.h>

void sortEvens(int arr[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] % 2 == 0 && arr[j+1] % 2 == 0 && arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
}

int main() {
    int arr[] = {5, 8, 3, 2, 6, 1, 4}, n = 7;
    sortEvens(arr, n);
    printf("Array after sorting evens: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    return 0;
}
