#include<stdio.h>
#include<string.h>

int main(){
    char str[10],chr;
    printf("Enter five charcters: ");
    for (int i = 0; i <5; i++)
        scanf(" %c",&str[i]);
    printf("Enter the character for finding: ");
    scanf(" %c",&chr);
    for (int j = 0; j < 5; j++)
    {
        if (chr==str[j])
            printf("The character is at index %d",j+1);
    }
    return 0;
}