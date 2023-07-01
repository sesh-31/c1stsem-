#include<stdio.h>
int main(){
    int age= 22;
    int *ptr =&age;
     //address and value
     printf("%d\n",*(&age));
     printf("%u\n",&age);
     printf("%d\n",*ptr);
     printf("%d\n",*(&ptr));//pointer ko value ma hamle age ko address store garainxa so adress of age auxa !
     printf("%u\n",&ptr);//%p can be use there !
     return 0;
}