#include<stdio.h>
void swap(int a , int b);
int main(){
    int m=22, n=44;
    printf("value pre swap is m=%d and n=%d" ,m,n);
    swap(m,n);
    return 0;
} // value of actual parameter is copied to a formal parameter 
// values of a variable is passed  to a function as a parameters .
 void swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("\n values after swap is m=%d \n and n=%d",a,b);
 }