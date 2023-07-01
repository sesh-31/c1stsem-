#include<stdio.h>
int main(){
    int n,i;
    printf("enter numbers of elements : \n");
    scanf("%d",&n);
    int arr[n];
    printf("enter your array elements: \n");
    for( i=0; i<n; i++){
       scanf("%d",&arr[i]);
    }
    printf("the reverse order of your array is: \t");
    for(i=n-1; i>=0; i--){
        printf("%d\t",arr[i]);
    }
    return 0;

}