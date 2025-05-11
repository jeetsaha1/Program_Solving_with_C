#include<stdio.h>
//Read a file by C program
int main(){
    FILE *fptr;
    fptr=fopen("file1.txt","r");
    char ch;
    while (1)
    {
        ch=fgetc(fptr);
        if (ch==EOF)
        {
            break;
        }
        printf("%c",ch);
    }
    printf("\n");
    fclose(fptr);

    return 0;
}