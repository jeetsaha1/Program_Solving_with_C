#include<stdio.h>
void max(int arr[],int n){
    int m= 0;
    for(int i=1;i< n;i++){
        if(arr[i]>arr[m])
            m=i;
    }
    printf("%d",arr[m]);
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max(arr,n);
    return 0;
}
