#include<stdio.h>
void fun(int a , int b){
    int temp;
    temp=a;
    a=b;
    b=a;
    printf("after swaping are : %d %d",a,b);    
}
int main(){
    int a=3, b=5;
    printf("value before pre swap is %d %d",a,b);
    fun(a,b);
    return 0;
}