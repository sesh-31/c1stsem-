#include<stdio.h>

void main()
{
int arr[2][3],i,j;

for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("\n Enter elements of matrix: ");
scanf("%d",&arr[i][j]);
}
}
for(i=0;i<2;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",*(*(arr+i)+j));
}
printf("\n");
}
}
    