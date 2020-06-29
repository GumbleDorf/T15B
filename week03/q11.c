

int nodeDepth(BSTree t, int key) {
    //Base case
    if (t == NULL) {
        return -1;
    } else if (key == t->value) {
        return 0;
    } else if (key < t->value) {
        int i = nodeDepth(t->left);
        if (i == -1) {
            return -1;
        } else {
            return 1+ i;
        }
    } else /*key > t->value*/ {
        int i = nodeDepth(t->right);
        if (i == -1) {
            return -1;
        } else {
            return 1+ i;
        }
    }
}

/*
Tree:

    5
   /  \
  2     10
 /  \
1    3   


*/