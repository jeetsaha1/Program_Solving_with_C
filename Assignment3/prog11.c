#include<stdio.h>
// Write a Program to print given pattern:
// 1
// 12
// 123
// 1234
// 12345
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(int i=1;i<=(number+1);i++){
        for(int k=1;k<=i;k++){
            printf("%d",k);
            
            }
    printf("\n");
    }
    return 0;
}