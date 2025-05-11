//Correlation coefficient (r):
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter the number of obervations: ");
    scanf("%d",&n);
    float x[n],y[n];

    for (int i = 0, j = 0; i < n,j < n; i++, j++)
    {
        printf("Enter observation %d(x):",i+1);
        scanf("%f",&x[i]);                              //input x and y
        printf("Enter observation %d(y):",j+1);
        scanf("%f",&y[j]);
    }

    float sumx=0,sumy=0,sumxy=0,sumx2=0,sumy2=0;
    for (int i = 0; i < n; i++)
    {
        sumx+=x[i];             //calculate summation of x
        sumy+=y[i];             //calculate summation of y
        sumx2+=x[i]*x[i];       //calculate sum(x^2)
        sumxy+=x[i]*y[i];       //calculate sum(xy)
        sumy2+=y[i]*y[i];       //calculate sum(y^2)
    }

    float upper=(n*sumxy)-(sumx*sumy);
    float lower1=(n*sumx2)-(sumx*sumx);
    float lower2=(n*sumy2)-(sumy*sumy);
    float r=upper/sqrt(lower1*lower2);
    printf("The Correlation coefficient(r)=%f",r);
    return 0;
}
