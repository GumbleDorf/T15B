int BSTreeHeight(BSTree t) {
    //Base Case
    if (t == NULL) {
        return 0;
    } else if (t->left == NULL && t->right == NULL) {
        return 0;
    }
    //Recursive Case
    else {
        int l = BSTreeHeight(t->left);
        int r = BSTreeHeight(t->right);
        return 1+max(l,r);
    }
}

/*

 Root    --- Height = 0

 Root
    \           ---Height= 1
    Node

/*