#include<stdio.h>

int main(){
    int num,pow,f=1;
    printf("Enter the number and its power respictively: ");
    scanf("%d %d",&num,&pow);
    for(int i=0;i<pow;i++){
        f*=num;
    }
    printf("%dth power of %d is %d",pow,num,f);
    return 0;
}