#include<stdio.h>
void swap(int *n,int *m){
    int temp=0;
    temp=*n;
    *n=*m;
    *m=temp;
}
int main(){
    int n,arr[20],temp=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");                 //selection sort
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i < n-1; i++)
    {
        int min=i;
        for (int j =i+1; j < n; j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;
            }
        }
        if (min!=i)
        {
            swap(&arr[i],&arr[min]);
        }
        
        
    }
        
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}