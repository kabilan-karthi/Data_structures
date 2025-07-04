 #include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

struct Node* append(struct Node* head, int value) {
    struct Node* newNode = createNode(value);

    if (head == NULL)
        return newNode;

    struct Node* current = head;
    while (current->next != NULL)
        current = current->next;

    current->next = newNode;
    return head;
}

struct Node* findMiddle(struct Node* head) {
    if (head == NULL)
        return NULL;

    struct Node* slow = head;
    struct Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

void printList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;
    head = append(head, 1);
    head = append(head, 2);
    head = append(head, 3);
    

    printf("Linked List: ");
    printList(head);

    struct Node* middle = findMiddle(head);
    if (middle != NULL)
        printf("Middle element: %d\n", middle->data);

    return 0;
}
