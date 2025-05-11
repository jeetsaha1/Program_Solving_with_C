#include<stdio.h>
// Print the following pattern upto N Lines:
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
int main(){
    int n,num;
    printf("Enter: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int sapce=0;sapce<n-i;sapce++)
            printf("  ");
        num=1;
        for(int j=1;j<=i;j++){
            printf("%d   ",num);
            num=num*(i-j)/j;
        }
        printf("\n");
    }
    return 0;
}