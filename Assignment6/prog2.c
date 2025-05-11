#include<stdio.h>

int main(){
    int n,arr[20],temp=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");                 //insertion sort
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 1; i < n; i++)
    {
        int temp=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
        
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}