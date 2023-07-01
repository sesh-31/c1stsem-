#include<stdio.h>
int main(){
    int a,b,c,max;
    printf("enter 3 number ");
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("%d is max among them",max);
    return 0;
}