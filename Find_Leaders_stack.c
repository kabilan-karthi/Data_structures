#include <stdio.h>
#define MAX 100

void findLeaders(int arr[], int n) {
    int stack[MAX];
    int top = -1;
    int max_right= arr[n - 1];
    stack[++top]=max_right;
    for(int i=n-2;i>=0;i--){
        if(arr[i]>max_right){
            max_right=arr[i];
            stack[++top]=arr[i];
        }
    }
    for(int i=top;i>=0;i--){
        printf("%d ",stack[i]);
    }
    printf("\n");
}
  

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    findLeaders(arr, n);
    return 0;
}
