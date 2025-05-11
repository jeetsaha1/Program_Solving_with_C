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
    int max=0;
    for(int k=1;k<=n;k++){
        if(arr[k]>max){
            max=arr[k];                 //largest no.
        }
    }
    printf("The largest no. is: %d\n",max);
    int min=100000;
    for(int k=1;k<=n;k++){
        if(arr[k]<min){
            min=arr[k];                 //lowest no.
        }
    }
    printf("The largest no. is: %d",min);
    return 0;
}