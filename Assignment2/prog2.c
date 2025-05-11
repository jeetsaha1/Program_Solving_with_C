#include<stdio.h>
#include<math.h>
// Write program, which reads x1, y1, x2 and y2 and finds distance between points (x1,y1) and
// (x2,y2). input 3, 7, 11, 13 output 10.
int main(){
     int x1,x2,y1,y2;
    float distance;
    printf("Enter the x1: ");
    scanf("%d",&x1);
    printf("Enter the x2: ");
    scanf("%d",&x2);
    printf("Enter the y1: ");
    scanf("%d",&y1);
    printf("Enter the y2: ");
    scanf("%d",&y2);
    distance=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    printf("The distance is: %f",distance);
    return 0;
}