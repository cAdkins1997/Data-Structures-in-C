
#ifndef DATA_STRUCTURES_IN_C_LINKEDLIST_H
#define DATA_STRUCTURES_IN_C_LINKEDLIST_H

#endif //DATA_STRUCTURES_IN_C_LINKEDLIST_H

typedef struct {
    int data;
    struct Node* next;
} Node;

typedef struct {
    int data;
    struct Node* next;
    struct Node* previous;
} DoubleNode;

typedef struct {
    Node* head;
    int endPointer;
} LinkedList;

LinkedList initLinkedLIst(int data) {
    LinkedList linkedList;
    linkedList.head = (Node*) malloc(sizeof(int));
    linkedList.head->data = data;
    return linkedList;
}

void append(LinkedList* linkedList, int data) {
    Node* newNode = malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    Node* currentNode = linkedList->head->next;
    if (currentNode == NULL) {
        linkedList->head->next = newNode;
    }
    else {
        for (int i = 0; i < linkedList->endPointer; i++) {
            if (currentNode->next != NULL) {
                currentNode = currentNode->next;
            }
            else {
                currentNode->next = newNode;
            }
        }
    }
    linkedList->endPointer++;
}

void insert(LinkedList* linkedList, int location, int data) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    newNode->data = data;

    Node* currentNode = linkedList->head->next;
    for (int i = 0; i < location - 1; i++) {
        if (currentNode != NULL) {
            currentNode = currentNode->next;
        }
    }
    Node* nextNode = currentNode->next;
    currentNode->next = newNode;
    newNode->next = nextNode;
    linkedList->endPointer++;
}

void removeNode(LinkedList* linkedList, int location) {
    Node* currentNode = linkedList->head->next;
    if (location == 0) {
        linkedList->head = currentNode;
        free(currentNode);
    }
    else {
        for (int i = 0; i < 10; i++) {
            if (currentNode->next != NULL) {
                currentNode = currentNode->next;
            }
        }
        free(currentNode);
    }
    linkedList->endPointer--;
}

void freeLinkedList(LinkedList* linkedList) {
    Node* currentNode = linkedList->head->next;
    Node* nextNode;
    for (int i = 0; i < linkedList->endPointer; i++) {
        if (currentNode != NULL) {
            nextNode = currentNode->next;
            free(currentNode);
        }
        if (nextNode != NULL) {
            currentNode = nextNode;
        }
    }
    free(linkedList->head);
}