#include<stdio.h>

void merge(int arr[],int st,int mid,int en){
    int i=st,j=mid+1,k=0;     //k for inserting the ele of arr.
    int temp[en-st+1];        //for initialize the arr
    while (i<=mid && j<=en)
    {
        if (arr[i]<=arr[j])
        {
            temp[k++]=arr[i++];                     //merge sort
        }
        else
        {
            temp[k++]=arr[j++];
        }
    }
    while (i<=mid)
    {
        temp[k++]=arr[i++];
    }
    while (j<=en)
    {
        temp[k++]=arr[j++];
    }
    
    for (int x = 0,y=st; x < k; x++,y++)
    {
        arr[y]=temp[x];
    }
    
}

void merge_sort(int arr[],int st,int en){
    if (st<en)      
    {
    int mid = (st + en) / 2;
    merge_sort(arr,st,mid);
    merge_sort(arr,mid+1,en);

    merge(arr, st, mid,en);
    }
}

int main(){
    int arr[]={7,2,3,9,4,1};
    int n= sizeof(arr)/sizeof(arr[0]);
    merge_sort(arr,0,n-1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}




