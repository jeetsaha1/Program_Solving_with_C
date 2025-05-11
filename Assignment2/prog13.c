#include<stdio.h>

// No income tax is to be paid if income is less than 5000. If income is between 5000 and 6000 then
// tax is 10% of the amount by which the income exceeds 5000. If income is between 6000 and
// 15000 then the tax is 100 + 20% of the amount by which the income exceeds 6000. If income is
// more than 15000 then the tax is 1900 + 30% of the amount by which the income exceeds 15000.
// e.g. if income is 10000 then the tax will be 100 + (10000-6000)*20/100 = 900. Write a program,
// which reads income and calculates the income tax
int main(){
    float income,income_tax,exceed;
    printf("Enter your income: ");
    scanf("%f",&income);
    if(income<5000)
        printf("No income tax is to be paid.");
    else if(income>5000 && income<6000){
        exceed=income-5000;
        income_tax=exceed*10/100;
    }
    else if(income>6000 && income<15000){
        exceed=income-6000;
        income_tax=(exceed*20/100)+100;
    }
    else if(income>15000){
        exceed=income-15000;
        income_tax=(exceed*30/100)+1900;
    }
    else{
        printf("You give wrong input.");
    }
    printf("\nThe income tax is %f",income_tax);

}