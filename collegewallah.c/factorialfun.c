//making calculator for calculating combination ncr
#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1; i<=x; i++)
   { fact=fact*i;
   } 
   return fact;
   }
   
int main(){
    int n;
    printf("ENTer number containing n :");
    scanf("%d",&n);
    int nfact=factorial(n);
    printf("the factorial of n is %d ",nfact);
    return 0;
}