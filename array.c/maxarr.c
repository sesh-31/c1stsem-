#include<stdio.h>
#include<limits.h>

int main(){
    int arr[5]={1,2,3,4,5};
    int max=INT_MIN,i;
    printf("the large (maximum number) in your array is : \n");
    for( i=0; i<=4; i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
     printf("%d",arr[i]);
    return 0;
}