#include<stdio.h>
// Write a Program to print given pattern:
// A
// BC
// CDE
// DEFG
// EFGHI
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(int i=1;i<=(number+1);i++){
        for(int k=1;k<=i;k++){
            printf("%c",63+i+k);
            }
    printf("\n");
    }
    return 0;
}