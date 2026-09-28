#include <stdio.h>
int main() {
    int num, originalNum;
    int sum = 0;
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input! Please enter an integer.\n");
        return 1;
    }
    originalNum = num;
    if (num < 0) {
        num = -num;
    }
    while (num > 0) {
        int lastDigit = num % 10; 
        sum += lastDigit;         
        num = num / 10;           
    }
    printf("Sum of digits of %d is: %d\n", originalNum, sum);
    return 0;
}