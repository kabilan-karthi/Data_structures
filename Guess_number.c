#include <stdio.h>

int main() {
    int l = 1, h = 100, m, ans;
    printf("Think of a number between 1 and 100.\n");
    while (l <= h) {
        m = (l + h) / 2;
        printf("Is it %d? (1: Yes, 2: Higher, 3: Lower): ", m);
        scanf("%d", &ans);
        if (ans == 1) {
            printf("Guessed correctly!\n");
            break;
        } else if (ans == 2) l = m + 1;
        else if (ans == 3) h = m - 1;
        else printf("Invalid input.\n");
    }
    return 0;
}
