#include <stdio.h>
int main() {
    int r, c, x, a[10][10], f = 0;
    printf("Enter rows and cols: ");
    scanf("%d %d", &r, &c);
    printf("Enter array:\n");
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    printf("Enter element: ");
    scanf("%d", &x);
    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++)
            if (a[i][j] == x) {
                printf("Found at (%d, %d)\n", i, j);
                f = 1;
            }
    if (!f) printf("Not found\n");
    return 0;
}
