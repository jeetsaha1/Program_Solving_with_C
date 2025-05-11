#include<stdio.h>

int main(){
    int num1,num2,*ad1,*ad2;
    printf("Enter the numbers respectively:");
    scanf("%d %d",&num1,&num2);
    ad1=&num1,ad2=&num2;
    
    int temp=0;
    //swap
    temp=*ad1;
    *ad1=*ad2;
    *ad2=temp;
    printf("The swaped numbers: %d %d",*ad1,*ad2);
    return 0;
}