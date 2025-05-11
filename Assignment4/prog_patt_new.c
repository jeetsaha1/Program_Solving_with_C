#include<stdio.h>

int main(){
    int number,count=0;
    printf("Enter the number: ");
    scanf("%d",&number);
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {   count++;
            if (j%2==0)
            {
                printf(" %d",count);
            }
            else
            {
                printf(" %c",64+count);
            }
            
            
        }
        printf("\n");
    }
    
    return 0;
}