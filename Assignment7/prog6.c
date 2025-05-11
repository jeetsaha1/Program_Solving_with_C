#include<stdio.h>
#include<math.h>
int power(int num){
    int count=0;
    while (num!=0)
    {
        num/=10;
        count++;
    }
    return count;
    
}
void check_armstrong(int num){
    int temp=num,sum=0,r;
    int len=power(num);
    while (num != 0)
    {   
        r=num%10;
        sum+=pow(r,len);
        num=num/10;
    }
    printf("%d %d %d",temp,sum,len);
    if(sum==temp)
        printf("This no. is armstrong.");
    else
        printf("This is not armstrong. ");
}
int main(){
    int num;
    printf("Enter: ");
    scanf("%d",&num);
    check_armstrong(num);
    return 0;
}