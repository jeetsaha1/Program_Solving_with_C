#include<stdio.h>

int main(){
    FILE *fp1,*fp2;
    fp1=fopen("file1.txt","r");
    fp2=fopen("file2.txt","w");
    char ch;
    if (fp1==NULL)
    {
        printf("This file doesn't exist.");
    }
    while (1)
    {
        ch=fgetc(fp1);
        if (ch==EOF)
        {
            break;
        }
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
    printf("Content copied.");
    return 0;
}