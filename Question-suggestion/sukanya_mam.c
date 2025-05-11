#include<stdio.h>

int main(){
    int n=5,count=0;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=i; j++){
            count++;
           if(j%2==0)
                printf("%d ",count);
        
            else
                printf("%c ",64+count);
        }
        printf("\n");
    }
    return 0;
}