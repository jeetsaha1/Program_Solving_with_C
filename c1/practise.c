#include<stdio.h>
void sort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int temp=0;
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
    int n;
    printf("Enter the no. of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    sort(arr,n);

    int key;
    printf("Enter the elements to be fined out: ");
    scanf("%d",&key);
    int lower=0,upper=n-1,f=0,p;
    while (lower<=upper)
    {
        int mid=(lower+upper)/2;
        if (arr[mid]>key)
            lower=mid+1;
        else if (arr[mid]<key)
            upper=mid-1;
        else
        {
            p=mid;
            f=1;
            break;
        }
    }
    if (f==1)
    {
        printf("The element is found.");

    }
    else
        printf("Not found");
    return 0;
}


// #include<stdio.h>
// #include<string.h>
// int main(){
//     char str[20];
//     printf("Enter the string: ");
//     scanf("%s",str);
//     int len=strlen(str),flag=1;

//     for (int i = 0; i < len/2; i++)
//     {
//         if(str[i]==str[len-i-1]){     //palindrome for min time complexity
//             flag =1;
//         }
//         else
//             flag = 0;
//             break;
//     }
    
//     if(flag==1)
//         printf("Palindrome");
//     else
//         printf("Not palindrome.");
//     return 0;
// }