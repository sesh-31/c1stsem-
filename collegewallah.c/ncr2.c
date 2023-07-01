#include <stdio.h>

int factorial(int x) {
    int fact = 1;
    for (int i = 1; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n, r;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    printf("Enter a value for r: ");
    scanf("%d", &r);
    int n_fact = factorial(n);
    int r_fact = factorial(r);
    int n_r_fact = factorial(n - r);
    int ncr = n_fact / (r_fact * n_r_fact);
    printf("The value of ncr is %d.\n", ncr);
    return 0;
}
