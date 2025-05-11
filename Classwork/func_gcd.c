#include<stdio.h>

void gcd(int n,int m){
    int gcd=1;
    for(int i=1;i<=n;i++){
        if(n%i == 0 && m%i == 0){
            gcd=gcd*i;
        }
        else
            continue;
    }
    printf("%d",gcd);
}
int main(){
    int m,n;
    printf("Enter the number: ");
    scanf("%d %d",&m,&n);
    gcd(n,m);
    return 0;
}