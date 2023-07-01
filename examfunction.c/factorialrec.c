#include<stdio.h>
   int fact(int num);
   int main()
   {
    int x;
    printf("Enter a your number : \n");
    scanf("%d",&x);
    printf("the factorial of your number %d is %d \n", x,fact(x));
    return 0;
   }

int fact(int num)
{
    if(num>1){
        return num*fact(num-1);
    }
    else{
        return 1;
    }
}