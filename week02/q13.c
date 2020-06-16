int polynomialEval(int *a, int x, int n) {
    int sum = 1;
    for (int i = 0; i < n-1;i++) {
        sum = sum*(a[i] + a[i-1])
    }
    return sum;

}

/*
Find a_n * x^n + a_(n-1) * x^(n-1) + ... + 

e.g.

4x^3 + 3x^2 + 2x + 1 = (4x^2 + 3x + 2)x + 1
= ((4x+3)x + 2)x + 1

*/