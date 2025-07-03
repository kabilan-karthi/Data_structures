#include <stdio.h>

int main() {
    int n, x, a[50], l = 0, h, m;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter sorted array: ");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &x);
    h = n - 1;
    while (l <= h) {
        m = (l + h) / 2;
        if (a[m] == x) {
            printf("Found at %d\n", m);
            return 0;
        } else if (a[m] < x) l = m + 1;
        else h = m - 1;
    }
    printf("Not found\n");
    return 0;
}
