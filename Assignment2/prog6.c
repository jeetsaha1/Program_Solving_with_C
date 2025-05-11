#include<stdio.h>

#include<math.h>
// A student is awarded Ex grade if he gets more than 90 marks. He is awarded A grade if marks
// are between 80 and 89. Similarly range for B, C, D and P are 70-79, 60-69, 50-59, and 35-49
// respectively. The student is awarded F grade if he gets less then 35 marks. Program reads marks
// of a student and prints his grade
int main(){
    int number;
    printf("Enter the number:");
    scanf("%d",&number);
    if(number>91 && number <=100){
        printf("Grade:O");
    }
    else if(number>81 && number <=90){
        printf("Grade:E");
    }
    else if(number>71 && number <=80){
        printf("Grade:A");
    }
    else if(number>61 && number <=70){
        printf("Grade:B");
    }
    else if(number>51 && number <=60){
        printf("Grade:C");
    }
    else if(number <50){
        printf("Grade:F");
    }
    else{
        printf("You give wrong input");
    }
}