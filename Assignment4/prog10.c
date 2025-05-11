#include<stdio.h>

int main(){
    int n;
    printf("Enter the extension: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int index;
    printf("Enter the index: ");
    scanf("%d",&index);
    int arr1[n-index];

    for(int k=index,i=0;k<n;k++,i++){
        arr1[i]=arr[k];
    }
    for(int j=0;j<index;j++){
        printf("%d ",arr[j]);}
    
        printf("\n");
    for(int j=0;j<n-index;j++){
        printf("%d ",arr1[j]);}
    return 0;
}
