#include<stdio.h>
// Write a Program to print given pattern:
// A
// BB
// CCC
// DDDD

int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int k=1;k<=i;k++)
        printf("%c",64+i);
    printf("\n");
    }
    return 0;
}