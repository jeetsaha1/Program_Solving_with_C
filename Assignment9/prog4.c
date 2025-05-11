#include<stdio.h>

int main(){
    int n,ar[20];
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter the elements:\n ");
    for (int i = 0; i < n ; i++)
    {
        scanf("%d",ar+i);
    }
    printf("You entered:\n ");
    for (int i = 0; i < n; i++)
    {
        printf("%d",*(ar+i));
    }
    
    return 0;
}