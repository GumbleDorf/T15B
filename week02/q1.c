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


int lengthRecursive(List L) {

}

