#include<stdio.h>

// Write a Program to find all the Fibonacci numbers for a given range
int main(){
    int a,b,c,num,i=3;
    printf("Enter the number: ");
    scanf("%d",&num);
    a=0;
    b=1;
    printf("%d %d",a,b);

    while (i<=num)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
        i+=1;
    }

}