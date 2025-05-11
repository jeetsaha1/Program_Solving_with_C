#include<stdio.h>
#include<string.h>
struct std_details{
    char name[100];
    int std_ID;
    float marks1;
    float marks2;
    float marks3;
    float average;
};
int main(){
    int n;
    printf("Enter the number of students : ");
    scanf("%d",&n);
    struct std_details s[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter student's name: ");
        // gets(s[i].name);
        getchar();
        // fgets(s[i].name,sizeof(s[i].name),stdin);
        gets(s[i].name);
        printf("Enter students ID: ");
        scanf("%d",&s[i].std_ID);
        printf("Enter the marks of Subject(1): ");
        scanf("%f",&s[i].marks1);
        printf("Enter the marks of Subject(2): ");
        scanf("%f",&s[i].marks2);
        printf("Enter the marks of Subject(3): ");
        scanf("%f",&s[i].marks3);
        s[i].average=(s[i].marks1+s[i].marks2+s[i].marks3)/3.0;
    }
    
    
    printf("Name\t\t\tStudent ID\t\tSubject 1\t\tSubject 2\t\t Subject3\t\t Average\n");
    for (int  i = 0; i < n; i++)
    {
        printf("%s\t\t\t%d\t\t\t%f\t\t%f\t\t%f\t\t%f\n",s[i].name,s[i].std_ID,s[i].marks1,s[i].marks2,s[i].marks3,s[i].average);
    }
    
    return 0;
}