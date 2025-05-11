#include<stdio.h>

//Write a Program to print the summation of digits of user given input number
int main(){
    int number,sum=0;
    printf("Enter the number: ");
    scanf("%d",number);
    for(int i=0;i<=number;i++)
        sum+=i;
    printf("The sum is: %d",sum);

}