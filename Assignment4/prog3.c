#include<stdio.h>

int main(){
    int arr1[20],arr2[20];
    int num;
    printf("Enter the extensions: ");
    scanf("%d",&num);
    printf("Enter the elements: ");
    for(int i=1;i<=num;i++){
        scanf("%d",&arr1[i]);}
    for(int j=1;j<=num;j++){
        arr2[j]=arr1[j];
    }
    for(int k=1;k<=num;k++)
        printf("%d",arr2[k]);
    return 0;
}                   