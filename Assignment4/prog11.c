#include<stdio.h>

int main(){
    int n,m;
    printf("Enter the extension: ");          
    scanf("%d",&n);
    printf("Enter the extension: ");           
    scanf("%d",&m);

    int arr1[n+m];
    printf("Enter the elements: ");
    for(int i=1;i<=n;i++){
        scanf("%d",&arr1[i]);
    }
    
    
    int arr2[m];
    printf("Enter the elements: ");
    for(int i=0;i<=m;i++){
        scanf("%d",&arr2[i]);
    }

    for(int i=n+1;i<=n+m;i++)
        arr1[i]=arr2[i-n];
    
    for(int d=1;d<=n+m;d++)
        printf("%d ",arr1[d]);
    
    return 0;
    
}