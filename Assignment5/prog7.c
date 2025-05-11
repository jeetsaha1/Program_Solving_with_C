#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100];
    printf("Enter the character: ");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter the new character: ");
    fgets(str2,sizeof(str2),stdin);
    int res=strcmp(str1,str2);
    printf("%d",res);
    return 0;
}