#include<stdio.h>
int add(int x , int y){// parameters
    return x+y;
}
int main(){
    int a,b ;
    printf("Enter 2  number: \n");
    scanf("%d%d",&a,&b);
    int sum=add(a,b);//pass  by value......
    printf("the sum is %d",sum);
    return 0;
    }
    