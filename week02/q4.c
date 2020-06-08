int powIterative(int x, unsigned int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res = res * x;
    }
    return res;
}


int pow(int x, unsigned int n) {

}