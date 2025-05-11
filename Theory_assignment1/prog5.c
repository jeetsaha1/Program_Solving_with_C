#include<stdio.h>

int main(){
    float a,b,c;
    printf("Enter the sides of a triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    if(a+b>c || c+b>a || a+c>b){
        if(a==b && b==c && c==a)
            printf("This is Equilateral Triangle.");
        else if(a==b || b==c || c==a)
            printf("This is Isosceles Triangle.");
        else if((a*a)+(b*b)==(c*c) || (c*c)+(b*b)==(a*a) || (a*a)+(c*c)==(b*b))
            printf("this is Right Angled Triagle.");
        else if(a!=b && b!=c &&c!=a)
            printf("This is Scalene Triangle.");
        
    }
    else
        printf("You give wrong input. Try again..");
    return 0;
}