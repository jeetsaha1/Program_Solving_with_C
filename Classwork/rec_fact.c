#include<stdio.h>
int factorial(int n){
    int a=1;
    if (n==1 || n==0)
    {
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
    
}
int main(){
    int n,res;
    printf("Enter the number: ");
    scanf("%d",&n);
    res=factorial(n);
    printf("%d",res);
    return 0;
}