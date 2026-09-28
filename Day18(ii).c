#include <stdio.h>
int main() {
    int a, b;
 printf("Enter two positive integers: ");
    if (scanf("%d %d", &a, &b) != 2 || a <= 0 || b <= 0) {
        printf("Invalid input! Please enter two positive integers.\n");
        return 1;
    }
    int n1 = a, n2 = b;
    while (n2 != 0) {
        int remainder = n1 % n2;
        n1 = n2;         
        n2 = remainder;  
    }
    printf("HCF (GCD) of %d and %d is: %d\n", a, b, n1);
    return 0;
}