#include <stdio.h>

#define MAX 100

void reverseNumber(int num) {
    int stack[MAX], top = -1;

    while (num != 0) {
        stack[++top] = num % 10;
        num /= 10;
    }

    printf("Reversed number: ");
    while (top >= 0) {
        printf("%d", stack[top--]);
    }
    printf("\n");
}

int main() {
    int num = 12345;
    reverseNumber(num);
    return 0;
}
