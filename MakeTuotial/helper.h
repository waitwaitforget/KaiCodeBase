
int factorial(int n);

int factorial(int n) {
    if (n <= 1) return 1;
    return factorial(n-1) + factorial(n-2);
}
