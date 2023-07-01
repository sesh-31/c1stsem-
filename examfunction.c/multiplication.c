#include <stdio.h>
int multi(int x, int y);
int main(){
    int a,b;
    printf("Enter 2 number for multiplication : \n");
    scanf("%d%d",&a,&b);
    printf("Multiplication of you entered is %d \n",multi(a,b));
    return 0;
}
int multi(int x, int y){
    return x*y;
}