#include<stdio.h>

void bubblesort_ascending(int arr[],int n){
    int i,j,temp=0;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}


int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort_ascending(arr,n);

    for(int r=0;r<n;r++){
        printf("%d ",arr[r]);
    
    }
    printf("\n");
    
    return 0;
}