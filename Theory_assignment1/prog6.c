#include<stdio.h>

int main(){
    int char_num;
    printf("Enter the character by ASCII value: ");
    scanf("%d",&char_num);
    if(char_num>=65 && char_num<=90)
        printf("You have typed capital letters.");
    else if(char_num>=97 && char_num<=122)
        printf("You have typed small letters.");
    else if(char_num>=48 && char_num<=57)
        printf("You have typed integer number.");
    else if(char_num>=0 && char_num<=47)
        printf("You have typed special symbol.");
    else if(char_num>=58 && char_num<=64)
        printf("You have typed special symbol.");
    else if(char_num>=91 && char_num<=96)
        printf("You have typed special symbol.");
    else if(char_num>=123 && char_num<=127)
        printf("You have typed special symbol.");
    return 0;
}