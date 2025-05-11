#include<stdio.h>

// Write a program, which reads three integers X, Y and Z and prints Y+Z if X is 0. If X is 1 then Y-Z
// is printed. If X is 2 then Y*Z is printed. If X is 3 then Y/Z is printed. (use switch)
int main(){
    int x,y,z;
    printf("Enter x,y,z:");
    scanf("%d,%d,%d",&x,&y,&z);
    switch (x)
    {
    case 0:
        printf("%d",y+z);
        break;
    case 1:
        printf("%d",y-z);
        break;
    case 2:
        printf("%d",y*z);
        break;
    case 3:
        printf("%d",y/z);
        break;
    default:
        break;
    }

}