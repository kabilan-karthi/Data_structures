#include <stdio.h>
int main() {
    int n, x, a[50], f = -1, l = -1;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter array: ");
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    printf("Enter element: ");
    scanf("%d", &x);
    for(int i = 0; i < n; i++) {
        if (a[i] == x) {
            if (f == -1) f = i;
            l = i;
        }
    }
    if (f != -1) printf("First: %d, Last: %d\n", f, l);
    else printf("Not found\n");
    return 0;
}
