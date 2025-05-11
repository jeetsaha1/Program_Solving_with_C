#include<stdio.h>
int factorial(int n){
    int f=1;
    for (int i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
void peterson(int num){
    int temp=num;
    int sum=0;
    while (num!=0)
    {
        int r=num%10;
        int fact=factorial(r);
        sum+=fact;
        num/=10;
    }
    if(sum==temp)
        printf("Peterson no.");
    else
        printf("Not Peterson no.");
    
}
int main(){
    int number;
    printf("Enter :");
    scanf("%d",&number);
    peterson(number);
    return 0;
}