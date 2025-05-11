#include<stdio.h>
// Write a Program to print given pattern:
// ABCDE
// CDEF
// EFG
// GH
// I
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(int i=1;i<=(number+1);i++){
        for(int k=1;k<=number-i;k++){
            printf("%c",62+(2*i)+k);
            
            }
    printf("\n");
    }
    return 0;
}