#include<stdio.h>

int main(){
    int n;
    printf("Enter the extension: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=1;j<=n;j++)
        printf("%d",arr[j]);
    return 0;
}