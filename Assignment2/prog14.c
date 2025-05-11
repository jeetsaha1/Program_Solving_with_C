#include<stdio.h>

// Write a program, which reads a number X and prints a number Y. Y=X+10 if X is 6. Y is X*X if X is
// 7. Y is 2*X+4 if X is 12. Otherwise Y is X*6-1. (use switch)
int main(){
    int x,y;
    printf("Enter x: ");
    scanf("%d",&x);
    switch (x)
    {
    case 6:
        y=x+10;
        break;
    case 7:
        y=x*x;
        break;
    case 12:
        y=2*x+4;
        break;
    default:
        y=x*6-1;
        break;
    }
    printf("y= %d",y);

}