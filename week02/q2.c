int fib(int n) {
    assert(n > 0);
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fib(n-1) + fib(n-2);
    }
}

int fibN(int n) {
    /*
    int a[3];
    a[0] = 1;
    a[1] = 1;
    a[2] = 2;
    */
    int a = 1;
    int b = 1;
    int c = 2;
    if (n == 1 || n == 2) {
        return 1;
    } else {
        for (int count = 3; count <= n; count++) {
            a = b;
            b = c;
            c = b + a;
        }
        return c;
    }
}