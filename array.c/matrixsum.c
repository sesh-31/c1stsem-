#include<stdio.h>
int main(){
    int r,c,i,j;
    printf("Enter your row number for matrix : \n");
    scanf("%d",&r);
    printf("Enter your column number for matrix : \n");
    scanf("%d",&c);

    int a1[r][c],a2[r][c],a3[r][c];
    printf("Enter the elements of 1st matrix: ");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Enter the  elements of second matrix: ");
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            scanf("%d",&a2[i][j]);
        }
    }
    for(i=0; i<r; i++){
        for(j=0; j<c; j++){
            a3[i][j]=a1[i][j]+a2[i][j];
            printf("%d\t",a3[i][j]);
        }
        printf("\n");
    }
    return 0;
}
