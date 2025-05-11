#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the name: ");
    fgets(str,sizeof(str),stdin);
    printf("Your written string is: ");
    fputs(str,stdout);
    return 0;
}