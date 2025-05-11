#include<stdio.h>
int main(){
    int n,num;
    printf("Enter: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int space=0;space<=n-i;space++)
            printf("  ");
        for(int k=1;k<=i;k++)
            printf("%d ",k);    
    for(int l=i-1;l>=1;l--)
        printf("%d ",l);
    printf("\n");
        
    }
    
    return 0;
}