#include <stdio.h>

int gcd(int x, int y) {
    if (y == 0)
        return x; // Base case: when y becomes 0, x is the GCD
    return gcd(y, x % y); // Recursive step
}

int lcm(int a,int b){
    return (a/gcd(a,b))*b;
}
int main() {
    int num1, num2;
    printf("Enter the numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("LCM: %d\n", lcm(num1, num2));
    printf("GCD: %d\n", gcd(num1, num2));
    
    return 0;
}
