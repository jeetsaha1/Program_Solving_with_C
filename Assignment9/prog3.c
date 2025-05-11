#include<stdio.h>

int main(){
    int num1,num2,*ad1,*ad2;
    printf("Enter the numbers respectively:");
    scanf("%d %d",&num1,&num2);
    ad1=&num1;
    ad2=&num2;
    int sum=(*ad1)+(*ad2);
    printf("Sum : %d",sum);
    return 0;
}