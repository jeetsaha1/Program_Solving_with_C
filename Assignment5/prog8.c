#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter the name: ");
    gets(str);
    int count=0, len=strlen(str);
    for (int i = 0; i < len; i++)
    {
        if (str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'|| str[i]=='A'|| str[i]=='E'|| str[i]=='I'|| str[i]=='O'|| str[i]=='U'){
            printf("%c\n",str[i]);
            count++;       
        }
    }
    printf("The number of vowels is: %d",count);
    return 0;
}