#include<stdio.h>
#include<math.h>
//Write a Program to check whether a number is even or odd
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",number);
    if(number%2==0)
        printf("The number is even");
    else
        printf("The number is odd");
    return 0;
}