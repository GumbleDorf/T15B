#include<stdlib.h>

typedef struct List {
    Item data;
    struct List* next;
} *List;

List sortList(List ls) {
    List sorted = NULL;
    for (List curr = ls; curr != NULL; curr = curr->next) {
        sorted = insertList(L, curr->data);
    }
    return sorted;
}