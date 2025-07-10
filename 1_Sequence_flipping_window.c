#include <stdio.h>
int longestOnes(int* arr, int n) {
    int win_start= 0, win_end= 0;
    int zero_count = 0, max_len = 0;
    for (win_end = 0; win_end < n; win_end++) {
        if (arr[win_end] == 0)
            zero_count++;

        while (zero_count > 1) {
            if (arr[win_start] == 0)
                zero_count--;
            win_start++;
        }

        if (win_end - win_start + 1 > max_len)
            max_len = win_end - win_start + 1;
    }

    return max_len;
}

int main() {
    int arr[] = {1, 0, 1, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Longest sequence of 1s after flipping : %d\n", longestOnes(arr, n));
    return 0;
}
