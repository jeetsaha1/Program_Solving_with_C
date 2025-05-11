#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100];
    printf("Enter the character: ");
    gets(str);
    int len =strlen(str);
    for (int i = 0; i <=len; i++)
    {
        rev[i]=str[len-i];
    }
    for (int j = 0; j <=len; j++)
    {
        printf("%c",rev[j]);
    }
    return 0;
}