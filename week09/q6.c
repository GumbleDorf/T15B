typedef struct item {int k; int j; int m;} Item;

int itemCmp(Item a, Item b) {
    if (a.k == b.k) {
        if (a.j == b.j) {
            return cmp(a.m, b.m);
        }
        return cmp(a.j,b.j);
    } else {
        return cmp(a.k,b.k);
    }
}