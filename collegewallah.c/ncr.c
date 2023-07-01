//finding of ncr (combination) 

#include<stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=1; i<=x; i++)
   { fact=fact*i;
   } 
   return fact;
   }
   int combination(int  n, int r){
    int ncr;
    ncr=factorial(n)/(factorial(r)*factorial(n-r));
    return ncr;
}
int main (){
    int n;
    printf("Enter a  number  n ");
    scanf("%d",&n);
    int r;
    printf("Enter a number r");
    scanf("%d",&r);
    int ncr=combination(n,r);
    printf("the ncr of you Entered is %d",ncr);
    return 0;
}

    