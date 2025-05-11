#include<stdio.h>

int main(){
    int n,ele,flag=0;
    printf("Enter the extension: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element: ");
    scanf("%d",&ele);
    for(int j=1;j<=n;j++){
        if(arr[j]==ele){
            flag=1;
        }
    }
    if(flag==1)
        printf("The element %d is found in this array.",ele);
    else
        printf("The element is not found.");
    return 0;
}