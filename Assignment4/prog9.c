#include<stdio.h>

int main(){
    int n;
    printf("Enter the extension: ");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    printf("Enter the elements: ");
    for(int i=0;i<=n;i++){
        scanf("%d",&arr1[i]);
    }

    for(int j=0;j<=n;j++){
        arr2[j]=arr1[n-j];
    }

    for(int j=0;j<=n;j++)
        printf("%d ",arr2[j]);
    return 0;
}