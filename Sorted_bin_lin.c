#include <stdio.h>

int isSorted(int a[], int n) {
    for(int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1]) return 0;
    return 1;
}

int main() {
    int n, x, a[50];
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &x);

    if (isSorted(a, n)) {
  
        int l = 0, h = n - 1, m;
        while (l <= h) {
            m = (l + h) / 2;
            if (a[m] == x) {
                printf("Found at %d (Binary Search)\n", m);
                return 0;
            } else if (a[m] < x) l = m + 1;
            else h = m - 1;
        }
        printf("Not found\n");
    } else {
        // Linear Search
        int f = -1;
        for(int i = 0; i < n; i++) {
            if (a[i] == x) {
                f = i;
                break;
            }
        }
        if (f != -1) printf("Found at %d (Linear Search)\n", f);
        else printf("Not found\n");
    }
    return 0;
}
