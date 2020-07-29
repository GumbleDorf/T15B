typedef struct { int a; int b;} Item;

int isStableSort(Item original[], Item sorted[], int lo, int hi) {
    /*
    Method 1: (Best method)
    stablesort(original)
    for each element in original, sorted:
        check equal
    */
    /*
    Method 2: (If we don't have a stable sorting function)
    int duplicates = 0;
    for element in sorted:
        if element.a == previous_element.a:
            duplicates++;
        else:
            duplicates = 0;
        
        for each element2 in original:
            if element2.a == element.a:
                duplicates--
            
            if (duplicates == 0):
                assert(element2.b == element.b)
                break
    */
}