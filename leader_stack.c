#include <stdio.h>

#define MAX 100

void printLeaders(int arr[], int n) {
    int stack[MAX], top = -1;

    stack[++top] = arr[n - 1];  

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > stack[top]) {
            stack[++top] = arr[i];
        }
    }

    printf("Leaders in array: ");
    while (top >= 0) {
        printf("%d ", stack[top--]); 
    }
    printf("\n");
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    printLeaders(arr, n);
    return 0;
}
