#include<stdio.h>
//initialize a structure  
struct student
{
    char name[50];
    int marks[5];
};
//body
int main(){
    struct student s;
    printf("Enter the name of student: ");
    gets(s.name);
    // getchar();
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the mark of the Subject %d: ",i+1);
        scanf("%d",&s.marks[i]);
    }
    printf("\n________________________________________________________\n");
    printf("Your name is : ");
    puts(s.name);
    for (int i = 0; i < 5; i++)
    {
        printf("\nThe mark of the Subject %d: %d",i+1,s.marks[i]);
    }
    
    return 0;
}