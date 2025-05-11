#include<stdio.h>
#include<string.h>
int main(){
    char str[100], cpy[100];
    printf("Enter the character: ");
    fgets(str,sizeof(str),stdin);
    strcpy(cpy,str);
    fputs(cpy,stdout);
    return 0;
}