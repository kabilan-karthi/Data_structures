#include <stdio.h>
#include <limits.h>

#define MAX 100

int mainStack[MAX], minStack[MAX];
int topMain = -1, topMin = -1;

void push(int x) {
    mainStack[++topMain] = x;
    if (topMin == -1 || x <= minStack[topMin]) {
        minStack[++topMin] = x;
    }
}

void pop() {
    if (topMain == -1) return;
    if (mainStack[topMain] == minStack[topMin]) {
        topMin--;
    }
    topMain--;
}

int getMin() {
    if (topMin == -1) return INT_MAX;
    return minStack[topMin];
}

int main() {
    push(5);
    push(3);
    push(7);
    push(2);
    printf("Minimum: %d\n", getMin()); // 2
    pop();
    printf("Minimum after pop: %d\n", getMin()); // 3
    return 0;
}
