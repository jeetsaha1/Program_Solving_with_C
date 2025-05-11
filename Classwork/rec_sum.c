#include<stdio.h>
int odd(int n);
int even(int n){
    if (n%2==0)
    {
        printf("even");
    }
    else
    {
        odd(n);
    }
}
    
int odd(int n){
    if (n%2!=0)
    {
        printf("odd");
    }
    else
    {
        even(n);
    }
    
}
int main(){
    int n;
    printf("Enter: ");
    scanf("%d",&n);
    even(n);
    return 0;
}