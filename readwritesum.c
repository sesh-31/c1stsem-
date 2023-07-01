#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("sum.txt","r");
    int a ;
    fscanf(fptr,"%d",&a);
    int b;
    fscanf(fptr, "%d" ,&b);
    printf("the number is in file sum.txt are : \n %d %d",a,b);
   
    fclose(fptr);
      fptr=fopen("sum.txt","w");
    fprintf(fptr, "%d",a+b);

    return 0;
}