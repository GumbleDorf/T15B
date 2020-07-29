#include<stdlib.h>

typedef struct List {
    int data;
    struct List* next;
} *List;

List selectSort(List ls) {
    List sorted = NULL;
    List tail = sorted;
    List unsorted = ls;
    int len = len(ls);
    int lensorted = 0;
    while(lensorted != len) {
        int cache = 0;
        int found = 0;
        for (List curr = unsorted; curr != NULL; curr = curr->next) {
            if (!found) {
                cache = curr->data;
                found = 1;
            } else if(curr->data < cache && curr->data > tail->data){
                cache = curr->data;
            }
        }

        if(tail == NULL) {
            tail = malloc(sizeof(List));
            tail->data = cache;
            tail->next = NULL;
        } else {
            tail->next = malloc(sizeof(List));
            tail = tail->next;
            tail->data = cache;
            tail->next = NULL;
        }
        lensorted++;
       
    }
    return sorted;

}