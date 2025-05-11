#include<stdio.h>
// Print the following pattern upto N Lines:
//    1
//   121
//  12321
// 1234321
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(int i=1;i<=number;i++){
        for(int k=1;k<=number-i;k++)
            printf(" ");
        for(int j=1;j<=i;j++)
            printf("%d",j);
        for(int l=1;l<=i-1;l++)
            printf("%d",l);
    printf("\n");
    }
    return 0;
}