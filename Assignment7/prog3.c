// #include<stdio.h>
// int factorial(int x);
// int main(){
//     int num;
//     printf("Enter the number : ");
//     scanf("%d",&num);
//     int res=factorial(num);
//     printf("%d",res);
//     return 0;
// }
// int factorial(int x){
//     int f=1;
//     for (int i = 1; i <= x ; i++)
//     {
//         f=f*i;
//     }
//     return f;
// }

#include<stdio.h>
int factorial(int x){
    if (x==1||x==0)
        return 1;
    else
        return x* factorial(x-1);
}
int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d",&num);
    int res=factorial(num);
    printf("%d",res);
    return 0;
    return 0;
}