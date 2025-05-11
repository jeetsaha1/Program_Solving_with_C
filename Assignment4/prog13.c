#include<stdio.h>

int main(){
    int n,flag=0,term,term1;
    printf("Enter the sizes: ");
    scanf("%d",&n);
    int arr[n],even[n],odd[n];
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0,j=0,k=0;i<n;i++){
        if(i%2==0){
            even[j]=arr[i];
            j++;
        }
        else{
            odd[k]=arr[i];
            k++;
        }
    }
    if(n%2==0){
        term=n/2;
    }
    else{
        term=(n/2)+1;
    }
    if(n%2==0){
        term1=(n/2)+1;
    }
    else{
        term1=(n/2);
    }
    for(int i=0;i<term;i++){
        printf("%d ",even[i]);
    }
    printf("\n");
    for(int i=0;i<term1;i++){
        printf("%d ",odd[i]);
    }
    
    return 0;
}