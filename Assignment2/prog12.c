#include<stdio.h>

// Write a Program to calculate the Factorial of any integer
int main(){
    int num,fact=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
        fact*=i;
    printf("The factorial of %d is : %d",num,fact);

}