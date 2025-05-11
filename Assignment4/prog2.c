#include<stdio.h>

int main(){
    int n,m;
    printf("Enter the extensions: ");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    printf("Enter the elements: ");
    for(int i=1;i<=n;i++){
        for(int k=1;k<=m;k++)
            scanf("%d",&arr[i][k]);
        printf("\n");
    }
    for(int j=1;j<=n;j++){
        for(int l=1;l<=m;l++)
            printf("%d",arr[j][l]);
        printf("\n");
        }
    return 0;
}