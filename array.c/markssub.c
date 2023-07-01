#include<stdio.h>
int main(){
    int marks[8];
    int tmarks=0;
    float percent;
    printf("enter the marks of 8 subject : \n");
    for(int i=0; i<8; i++){
        printf("subject %d\t",i+1);
        scanf("%d",&marks[i]);
        tmarks=tmarks+marks[i];//tktftdkyyyyyy
    }
    percent=tmarks/8;
    printf("%dis the total marks.and %f is the percent. ",tmarks,percent);
    return 0;
}