#include<stdio.h>
int main(){
   
    float price=100.00;
    float *ptr = &price;
    float **pptr=&ptr;
    printf("price=%f\n",*ptr);
     printf("price=%f",**pptr);
    return 0;
}