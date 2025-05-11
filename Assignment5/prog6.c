#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100];
    printf("Enter the character: ");
    gets(str1);
    printf("Enter the new character: ");
    gets(str2);
    strcat(str1,str2);
    fputs(str1,stdout);
    return 0;
} 