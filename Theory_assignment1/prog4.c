#include<stdio.h>

int main(){
    int r_age,s_age,a_age;
    printf("Enter the ages of Ram, Shyam,Ajay respectively: ");
    scanf("%d %d %d",&r_age,&s_age,&a_age);
    if(r_age<s_age && r_age<a_age)
        printf("The yongest is Ram.");
    else if(s_age<r_age && s_age<a_age)
        printf("The youngest is Shyam.");
    else if(a_age<r_age && a_age<s_age)
        printf("The youngest is Ajay");
    return 0;
}