#include<stdio.h>

int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    if (number>0)           
        printf("%d",number);
    else if(number<0)
        printf("%d",-number);
    else
        printf("0");
    
    return 0;
}