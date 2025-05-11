#include<stdio.h>
int power(int x,int y);
int main(){
    int num,pow;
    printf("Enter the number and its power respectively: ");
    scanf("%d %d",&num,&pow);
    int res=power(num,pow);
    printf("%d",res);
    return 0;
}
int power(int x,int y){
    int f=1;
    for (int i = 1; i <= y ; i++)
    {
        f=f*x;
    }
    return f;
}