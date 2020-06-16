int powIterative(int x, unsigned int n) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res = res * x;
    }
    return res;
}


int pow(int x, unsigned int n) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return x;
    } else if(n%2 == 1) {
        return x*pow(x*x,(n-1)/2);
    } else if (n%2 == 0) {
        return pow(x*x,n/2);
    }
}


/*

2^8

2^8 = 2*(4^4)(WRONG)

2^9 = 2*(2^8) = 2*(4^4)
        




*/