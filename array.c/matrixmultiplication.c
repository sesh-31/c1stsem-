#include <stdio.h>

int main() {
    int r, c ,r2 , c2;

    printf("Enter the number of rows: ");
    scanf("%d", &r);

    printf("Enter the number of columns: ");
    scanf("%d", &c);

    int a[r][c];
    
    printf("Enter array elements:\n");
    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
   printf("Enter the number of rows:2nd matrix. ");
    scanf("%d", &r2);

    printf("Enter the number of columns:2nd matrix. ");
    scanf("%d", &c2);

    int arr[r2][c2];
    
    printf("Enter 2nd matrix elements:\n");
    for(int i = 0; i < r2; i++) {
        for(int j = 0; j < c2; j++) {
            scanf("%d", &arr[i][j]);
        }
    } 
    int brr[r][c2];
    for(int i=0; i<r; i++){
    for(int j=0; j<c2; j++){
    int sum=0;
    for(int k=0; k<r; k++){
    sum=sum+a[i][k]*arr[k][j];
    brr[i][j]=sum;}
    }
    
    }  
    printf("the multiplied martix is:\n");
    for(int i=0; i<r; i++){
    for(int j=0; j<c2; j++){
    printf("%d\t",brr[i][j]);
     }
    printf("\n");
    }
    return 0;
}
