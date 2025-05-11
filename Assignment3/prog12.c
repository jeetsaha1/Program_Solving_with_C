#include<stdio.h>
// Print the following pattern upto N Lines:
// 10001
// 01010
// 00100
// 01010
// 10001
int main(){
    int number;
    printf("Enter the number: ");
    scanf("%d",&number);
    for(int i=0;i<number;i++){
        for(int j=0;j<number;j++)
            {
                if(j==i||j==(number-i-1))
                    printf("1");
                else
                    printf("0");
            }
    printf("\n");
    }
        
    return 0;
}