typedef struct Node *Link;  // Links are pointers to Nodes
typedef struct Node *Tree;  // a tree is a pointer to its root Node
struct Node { int data; Link left; Link right; };
#include <stdlib.h>
#define NOT_HEIGHT_BALANCED -99

int isHeightBalanced (Tree t) { 
    
    // Base case
    if (t == NULL) {
        return 0;
    }
    // Recursive Case
    int l = isHeightBalanced(t->left);
    int r = isHeightBalanced(t->right);
    int diff = abs(l - r);
    if (diff > 1 || l == NOT_HEIGHT_BALANCED || r == NOT_HEIGHT_BALANCED) {
        return NOT_HEIGHT_BALANCED;
    } else {
        return 1+max(l,r);
    }
}

int heightOfTree(Tree t) {
    /*
    q = new queue
    add (t, 0) to queue
    while queue is not empty
        (head, n) = pop queue
        for each child in t
            add child to queue as (child, n+1)
    */

}