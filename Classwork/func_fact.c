#include<stdio.h>
void factorial(int n){
    long int fact=1;
    for (int i = 1; i <= n; i++)
    
        fact*=i;
    
    printf("%d",fact);
    
}
int main(){
    int n;
    printf("Enter the nmumber ");
    scanf("%d",&n);
    factorial(n);
    return 0;
}