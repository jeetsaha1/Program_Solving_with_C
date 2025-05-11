#include<stdio.h>
#include<math.h>
//Write program, which reads a, b and c as sides of a triangle and prints area.
// Hint: area = sqrt( s(s-a)(s-b)(s-c) ) and s = (a+b+c)/2] [sqrt(x) will find square root] Input 5 7
// 10 output 16.24
int main(){
     int a,b,c;
    float s,area;
    printf("Enter the first side: ");
    scanf("%d",&a);
    printf("Enter the second side: ");
    scanf("%d",&b);
    printf("Enter the third side: ");
    scanf("%d",&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area is:%f",area);
    return 0;
}