int countInternal(BSTree t) {
    //Base case
    if (t == NULL || (t->left == NULL && t->right == NULL)) return 0;
    //Recursive case
    return 1 + countInternal(t->left) + countInternal(t->right);
}

//Internal Node: any node that has at least one non null subtree