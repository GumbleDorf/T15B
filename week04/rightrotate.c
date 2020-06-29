typedef struct Node *Link;  // Links are pointers to Nodes
typedef struct Node *Tree;  // a tree is a pointer to its root Node
struct Node { int data; Link left; Link right; };


int rightRotate(tree t) {
    Link leftChild = t->left;
    t->left = leftChild->right;
    leftChild->right = t
    return leftChild;
}