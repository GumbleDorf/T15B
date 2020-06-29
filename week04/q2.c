typedef struct Node *Link;  // Links are pointers to Nodes
typedef struct Node *Tree;  // a tree is a pointer to its root Node
struct Node { int data; Link left; Link right; };

int printHeightDiff (Tree t) { 
    // Base case
    if (t == NULL) {
        return 0;
    }
    // Recursive Case
    int l = printHeightDiff(t->left);
    int r = printHeightDiff(t->right);
    int diff = l - r;
    printf("data: %d, diff: %d", t->value, diff);
    return 1+max(l,r);
}