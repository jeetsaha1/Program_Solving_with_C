#include<stdio.h>
#include<math.h>
int main(){
    double p,r,a;
    int n,q;
    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter Principle(p), Annual interst rate(r in percentage, years(n), Compouding interst(q): ");
        scanf("%lf %lf %d %d", &p, &r, &n, &q);
        r=r/100.0;
        a=p * pow((1 + (r / q)), (n * q));
        printf("Final Amount after compounding: %.2lf\n",a);
    }
    
    
    return 0;
}