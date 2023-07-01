#include <stdio.h>

int main() {
    int i, j, m1[2][2], m2[2][2];
    
    printf("Enter the elements of the matrix:\t");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &m1[i][j]);
        }
    }
    
   
    printf("The transpose of the matrix is:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", m1[j][i]);
        }
        printf("\n");
    }
    
    return 0;
}
