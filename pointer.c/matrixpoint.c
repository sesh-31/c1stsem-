#include<stdio.h>

void main()
{
int arr[100],i,n;

printf("How many elements are there: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n Enter element: ");
scanf("%d",(arr+i));
}
printf("\n Printing array element:");
for(i=0;i<n;i++)
{
printf("\n %d",*(arr+i));
}

}
