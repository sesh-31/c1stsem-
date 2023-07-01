#include <stdio.h>

int fibonacci(int num) {
    if (num == 0) {
        return 0;
    } else if (num == 1) {
        return 1;
    } else {
        return fibonacci(num - 1) + fibonacci(num - 2);
    }
}  

int main() {
    int num, i;
    printf("Enter a non-negative integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
        return 1;
    }
    printf("Fibonacci sequence of %d terms: ", num);
    for (i = 0; i < num; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    return 0;
}

