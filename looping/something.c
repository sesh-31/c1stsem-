#include<stdio.h>
int main(){
    int n;
    printf("enter your number : ");
    scanf("%d",&n);
    for(int i=2; i<n; i++)
        if(n%i==0){
            printf("the number you entered is not prime");
        }
        else{
            printf("the number is prime ! ");
        }
    
    return 0;
}