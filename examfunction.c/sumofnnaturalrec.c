#include<stdio.h>
int sum(int x){
    if (x>0){
        return x+sum(x-1);
    }
    else{
        return 0;
    }
}   
  int main(){
    int n;
    printf("Enter a number n : \n");
    scanf("%d",&n);
    printf("the sum upto %d  is : %d \n",n,sum(n));
    return 0;
  }