#include <stdio.h>
int main() {
    int i, j, m1[2][2], m2[2][2], sum[2][2];
    
    // Taking input for the first matrix
    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &m1[i][j]);
        }
    }
    
    // Taking input for the second matrix
    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &m2[i][j]);
        }
    }
    
    // Computing the sum of the matrices
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            sum[i][j] = m1[i][j] + m2[i][j];
        }
    }
    
    // Displaying the sum of the matrices
    printf("The sum of the matrices is:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
