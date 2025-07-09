#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Node Structure
struct Node {
    int data;
    struct Node* next;
};

// Create Node
struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Traverse Node
void traverse(struct Node* head) {
    while (head != NULL) {
        printf(" %d", head->data);
        head = head->next;
    }
    printf("\n");
}

// Search an element
bool search(struct Node* head, int key) {
    struct Node* curr = head;
    while (curr != NULL) {
        if (curr->data == key) {
            return true;
        }
        curr = curr->next;
    }
    return false;
}

int count(struct Node* head){
    struct Node* curr=head;
    int count=0;
    while(curr!=NULL){
        count++;
        curr=curr->next;
    }
    return count;
}

// Driver code
int main() {
    struct Node* head = newNode(10);
    head->next = newNode(20);
    head->next->next = newNode(30);
    head->next->next->next = newNode(40);

    traverse(head);

    int key = 20;
    if (search(head, key)) {
        printf("The element %d is present in the linked list\n", key);
    } else {
        printf("The element %d is not present in the linked list\n", key);
    }
    
    printf("The number of elements in the linked list is %d",count(head));

    return 0;
}
