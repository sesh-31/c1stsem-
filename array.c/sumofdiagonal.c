#include <stdio.h>

int main() {
    int r, c,i,j;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int arr[r][c];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < r; i++) {
        for ( j = 0; j < c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;
    for ( i = 0; i < r; i++) {
        for ( j = 0; j < c; j++)
        {
            if (i==j){
                sum=sum+arr[i][j];
            }
        }
        
    }

    printf("The sum of diagonal elements is: %d\n", sum);

    return 0;
}
