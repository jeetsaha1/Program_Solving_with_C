#include<stdio.h>

int main(){
    FILE *fp;
    char subject[20];
    int num,total=0,count_sub=0;
    fp=fopen("file1.txt","r");
    if (fp==NULL)
        printf("File cannot opening...\n");
    else
        for (int i = 0; i < 5; i++)
        {
            fscanf(fp,"%s %d",subject,&num);
            printf("%s : %d\n",subject,num);
            total+=num;
            count_sub++;
        }
        fclose(fp);
        float avg=total/count_sub;
        printf("\nThe Average marks : %f",avg);
        // printf("%d",count_sub);
    
    return 0;
}   