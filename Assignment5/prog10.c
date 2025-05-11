#include<stdio.h>
// #include<string.h>
void sort(int arr[],int n){
    char temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            } 
        }
    }
}
int main(){
    int str[20];
    int n,p,f=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&str[i]);
    }
    sort(str,n);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ",str[i]);
    // }
    int key;
    printf("Enter the element for searching: ");
    scanf("%d",&key);
    int low=0,high=n-1;
    while(low<=high){
        int mid= (low+high)/2;
        if(str[mid]<key)
            low=mid+1;
        else if(str[mid]>key)
            high=mid-1;
        else{
            p=mid;
            f=1;
            break;
        }
    }
    if(f==1)
        printf("The element is found at index %d",p);
    else
        printf("Not found.");

    return 0;
}