#include<stdio.h>
void fibbonacci(int n){
    int a=0,b=1,temp,i=0;
    printf("%d %d ",a,b);
    while (i<=n-2)
    {
        temp=a+b;
        printf("%d ",temp);
        a=b;
        b=temp;
        i++;
    }
    
}
int main(){
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    fibbonacci(num);
    return 0;
}