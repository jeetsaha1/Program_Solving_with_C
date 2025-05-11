#include<stdio.h>

int main(){
    int num,*add;
    printf("Enter the number: ");
    scanf("%d",&num);
    add=&num;
    printf("The address of the variable: %d",add);
    return 0;
}