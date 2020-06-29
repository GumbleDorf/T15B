typedef struct BSTNode *BSTree;
typedef struct BSTNode {
	int value;
	BSTree left;
	BSTree right;
} BSTNode;

int BSTreeNumNodes(BSTree t) {
    //Base case
    if (t == NULL) return 0;
    //Recursive case
    return 1 + BSTreeNumNodes(t->left) + BSTreeNumNodes(t->right);
}