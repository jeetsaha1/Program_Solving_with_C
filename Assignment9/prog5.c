#include<stdio.h>
int factorial(int *a){
    int f=1;
    for (int  i = 1; i <= *a; i++)
    {
        f*=i;
    }
    return f;
}
int main(){
    int num,*fact;
    printf("Enter the number: ");
    scanf("%d",&num);
    fact=&num;
    int res=factorial(&num);
    printf("Factorial: %d",res);
    return 0;
}