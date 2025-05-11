#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the character: ");
    fgets(str,sizeof(str),stdin);
    int len=strlen(str);
    printf("%d",len-1);
    return 0;
}   
