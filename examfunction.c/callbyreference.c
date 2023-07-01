#include<stdio.h>
void swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("value after swaping is m=%d and n=%d",*a,*b);
}
 int main()
 {  int m, n;
      printf("enter the two numbers : ");
      scanf("%d%d",&m,&n);
      swap(&m,&n);
      printf("value after swaping are : %d %d",m,n);
    return 0;
 }
 