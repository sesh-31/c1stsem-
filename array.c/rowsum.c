#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int n, m, i, j;

    printf("Enter the number of rows (n) in the matrix: ");
    scanf("%d", &n);

    printf("Enter the number of columns (m) in the matrix: ");
    scanf("%d", &m);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Sum of each row:\n");
    for (i = 0; i < n; i++) {
        int rowSum = 0;
        for (j = 0; j < m; j++) {
            rowSum += matrix[i][j];
        }
        printf("Row %d: %d\n", i+1, rowSum);
    }

    return 0;
}