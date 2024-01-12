#include <stdio.h>
#include "stack.h"
#include "queue.h"
#include "sorting.h"
#include "linkedlist.h"

int main() {
    LinkedList linkedList = initLinkedLIst(0);
    for (int i = 1; i < 10; i++) {
        append(&linkedList, i);
    }

    insert(&linkedList, 5, rand());
    removeNode(&linkedList, 5);
    printf("%d\n", linkedList.head->data);
    Node* currentNode = linkedList.head->next;
    for (int i = 0; i < linkedList.endPointer; i++) {
        if (currentNode->next == NULL) {
            break;
        }
        else {
            printf("%d\n", currentNode->data);
            currentNode = currentNode->next;
        }
    }
}
