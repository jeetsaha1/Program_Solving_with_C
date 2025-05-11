#include<stdio.h>
// Print the following pattern upto N Lines:
// ****
// ****
// ****
// ****
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int j=1;j<=number;j++)
        printf("*");
    printf("\n");
    }

    return 0;
}