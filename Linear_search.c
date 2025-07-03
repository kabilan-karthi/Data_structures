#include <stdio.h>

int main() {
    int n, x, a[50], f = -1;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter element to search: ");
    scanf("%d", &x);
    for(int i = 0; i < n; i++) {
        if (a[i] == x) {
            f = i;
            break;
        }
    }
    if (f != -1) printf("Found at %d\n", f);
    else printf("Not found\n");
    return 0;
}
