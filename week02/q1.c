typedef struct _node {
    int data;
    struct _node *next;
} Node;

typedef Node *List;

int length(List L) {
    int len = 0;
    for (List l = L; l != NULL; l = l->next) {
        len++;
    }
    return len;
}


int lengthR(List L) {
    if (L == NULL) {
        return 0;
    } else {
        return 1 + lengthR(L->next);
    }
}

/*

Base case: NULL list -> returns 0

Recursive case: Current node + length of list - current node -> 
returns length of list starting at next node


*/

