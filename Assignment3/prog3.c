#include<stdio.h>
// Print the following pattern upto N Lines:
// ****
// ***
// **
// *
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(int i=0;i<=number;i++){
        for(int k=0;k<=i;k++)
            printf(" ");
        for(int j=number-i;j>=1;j--)
            printf("*");
        
        
    printf("\n");
    }
    return 0;
}