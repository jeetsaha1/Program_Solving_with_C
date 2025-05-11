#include<stdio.h>
#include<math.h>
//Write a Program to test whether any year is Leap year or not
int main(){
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if(year%4==0 && year%100!=0 ||year%400==0 ){
        printf("Leap year");
    }
    else{
        printf("Not leap year");
    }
    return 0;
}