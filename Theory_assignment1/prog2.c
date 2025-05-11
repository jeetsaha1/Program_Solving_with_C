#include<stdio.h>

int main(){
    float cost_price,selling_price,profit,loss;
    printf("Enter the cost price and selling price respectively: ");
    scanf("%f %f",&cost_price,&selling_price);
    profit=selling_price-cost_price;
    loss=cost_price-selling_price;
    if(cost_price>selling_price)
        printf("The loss is: %f",loss);
    else   
        printf("The profit is: %f",profit);
    return 0;
}