#include <stdio.h>
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int main() {
    int num1, num2;
    printf("Enter two positive integers: ");
    if (scanf("%d %d", &num1, &num2) != 2 || num1 <= 0 || num2 <= 0) {
        printf("Invalid input! Please enter two positive integers.\n");
        return 1;
    }
    int gcd = findGCD(num1, num2);
    int lcm = (num1 / gcd) * num2;
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}