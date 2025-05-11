#include<stdio.h>

//Write a Program to find all prime numbers within a given range
int main(){
    int upper,lower,flag,i,j;
    printf("Enter upper limit: ");
    scanf("%d",&upper);
    printf("Enter lower limit: ");
    scanf("%d",&lower);
    for(i=lower;i<=upper;i++){
        if(i==1||i==0)
            continue;
        flag=1;
        for(j=2;j<=i/2;j++){
            if(i%j==0)
                flag=0;
                break;
        }
        if(flag==1)
        printf(" %d",i);
    }


}