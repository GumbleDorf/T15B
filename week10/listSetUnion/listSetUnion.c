
#include "list.h"

List listSetUnion(List s1, List s2) {
    List newL = newList();
    Node tail = newL->head;
    List sorted1 = listSortedCopy(s1);
    List sorted2 = listSortedCopy(s2);
    Node h1 = sorted1->head;
    Node h2 = sorted2->head;
    Node nNode;
    while(h1 != NULL && h2 != NULL) {
        if (h1->value < h2->value) {
            nNode = newNode(h1->value);
            h1 = h1->next;
        } else {
            nNode = newNode(h2->value);
            h2 = h2->next;
        }
        if (tail != NULL && nNode->value == tail->value) {
            free(nNode);
            continue;
        }
        if (tail == NULL) {
            newL->head = nNode;
            tail = newL->head;
        } else {
            tail->next = nNode;
            tail = tail->next;
        }
    }
    while (h1 != NULL) {
        nNode = newNode(h1->value);
        h1 = h1->next;
        if (tail != NULL && nNode->value == tail->value) {
            free(nNode);
            continue;
        }
        if (tail == NULL) {
            newL->head = nNode;
            tail = newL->head;
        } else {
            tail->next = nNode;
            tail = tail->next;
        }
    }
    while(h2 != NULL) { 
        nNode = newNode(h2->value);
        h2 = h2->next;
        if (tail != NULL && nNode->value == tail->value) {
            free(nNode);
            continue;
        }
        if (tail == NULL) {
            newL->head = nNode;
            tail = newL->head;
        } else {
            tail->next = nNode;
            tail = tail->next;
        }
    }
    freeList(sorted1);
    freeList(sorted2);
    return newL;
    


}

