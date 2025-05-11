#include<stdio.h>

int main(){
    FILE *fp;
    fp=fopen("file2.txt","w");
    char ch[100];
    printf("Enter the sentence : ");
    gets(ch);
    if (fp==NULL)
        printf("The file cannot open. ");
    
    fprintf(fp,"%s",ch);
    printf("Content is written.");
    fclose(fp);
    return 0;
}