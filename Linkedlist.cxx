#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};


struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void appendNode(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}


struct Node* getMiddle(struct Node* head) {
    struct Node* slowPtr = head;
    struct Node* fastPtr = head;
    while (fastPtr != NULL && fastPtr->next != NULL) {
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }
    return slowPtr;
}


void insertAfterMiddle(struct Node** head, int data) {
    if (*head == NULL) {
        *head = createNode(data);
        return;
    }

    struct Node* middle = getMiddle(*head);
    struct Node* newNode = createNode(data);
    newNode->next = middle->next;
    middle->next = newNode;
}


void removeMiddle(struct Node** head) {
    if (*head == NULL || (*head)->next == NULL) {
        return;
    }

    struct Node* slowPtr = *head;
    struct Node* fastPtr = *head;
    struct Node* prevPtr = NULL;

    while (fastPtr != NULL && fastPtr->next != NULL) {
        prevPtr = slowPtr;
        slowPtr = slowPtr->next;
        fastPtr = fastPtr->next->next;
    }

    if (prevPtr != NULL) {
        prevPtr->next = slowPtr->next;
        free(slowPtr);
    }
}

void displayList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;

  
    appendNode(&head, 10);
    appendNode(&head, 20);
    appendNode(&head, 40);
    appendNode(&head, 50);

    printf("Initial List: ");
    displayList(head);


    insertAfterMiddle(&head, 30);
    printf("After inserting 30 after the middle: ");
    displayList(head);

 
    removeMiddle(&head);
    printf("After removing the middle node: ");
    displayList(head);

    return 0;
}