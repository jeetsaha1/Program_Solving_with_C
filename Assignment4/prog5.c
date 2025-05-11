#include<stdio.h>

int main(){
    int n1,m1;
    printf("Enter the extensions: ");
    scanf("%d %d",&n1,&m1);
    int arr1[n1][m1];

    printf("Enter the elements: ");
    for(int i=0;i<n1;i++){                     //first matrix
        for(int k=0;k<m1;k++)
            scanf("%d",&arr1[i][k]);
        printf("\n");
    }
  
    int arr2[n1][m1];
    printf("Enter the elements: ");
    for(int i=0;i<n1;i++){
        for(int k=0;k<m1;k++)
            scanf("%d",&arr2[i][k]);                 //second matrix
        printf("\n");
    }
    
    int res=0,add[n1][m1];
    for(int i=0;i<n1;i++){                         //addition
        for(int j=0;j<m1;j++){
            res=arr1[i][j]+arr2[i][j];
            add[i][j]=res;
        }
    }

    int arr[n1][m1],sum=0;
    for(int i=0;i<n1;i++){                          //multiplication
        for(int j=0;j<m1;j++){
            sum = 0;
            for(int k=0;k<n1;k++){
                sum+=arr1[i][k]*arr2[k][j];
            }
            arr[i][j]=sum;
        }
    }



    for(int d=0;d<n1;d++){
        for(int m=0;m<n1;m++){                     //prinnting addition
            printf("%d ",add[d][m]);
        }
        printf("\n");
    }

    for(int d=0;d<n1;d++){
        for(int m=0;m<n1;m++){                     //prinnting multiplication
            printf("%d ",arr[d][m]);
        }
        printf("\n");
    }


    return 0;
}
