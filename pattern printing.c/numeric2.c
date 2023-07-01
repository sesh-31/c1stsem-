#include<stdio.h>
int main(){
    int k;
    for(int i=1; i<=5; i++){
        k = i;
        for(int j=1; j<=i; j++){
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
