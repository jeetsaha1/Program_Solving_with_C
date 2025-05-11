#include<stdio.h>
int sum(int a,int b,int c);
int main(){
    int a,b,c;
    printf("Enter the numbers by giving space: ");
    scanf("%d %d %d",&a,&b,&c);
    int summation=sum(a,b,c);
    printf("%d",summation);
    return 0;
}

int sum(int a,int b,int c){
    int res=a+b+c;
    return res;
}