#include<stdio.h>

#include<math.h>
//Write a Program to reverse the digits of an integer
int main(){
    int num,res,digit,r,s=0;
    printf("Enter the number of digit: ");
    scanf("%d",&digit);
    printf("Enter the number: ");
    scanf("%d",&num);
    int i=1;
    while (i<=digit)
    {
        r=num%10;
        num=num/10;
        s=s*10+r;
        i+=1;
    }
    printf("The reversed digit is: %d",s);

}