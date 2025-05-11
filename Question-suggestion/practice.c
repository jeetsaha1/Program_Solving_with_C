#include<stdio.h>

int main(){
    int n,num;
    printf("Enter: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int sapce=0;sapce<n-i;sapce++)
            printf("  ");
        num=1;
        for(int j=1;j<=i;j++){
            printf("%d   ",num);
            num=num*(i-j)/j;
        }
        printf("\n");
    }
    return 0;
}