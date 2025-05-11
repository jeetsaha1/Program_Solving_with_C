#include<stdio.h>
int main(){
    int n;
    printf("Enter: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for (int j = 0; j <= n; j++)
        {
            if (i==0 || i==n || j==0 ||j==n)
                printf("1");
            else if (i==j|| i==n-j)
                printf("0");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}