#include <stdio.h>
#include <math.h>
int num;
int digits;
int main() {
    
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Please enter a positive number\n");
    } 
    else {
        digits = (int)log10(num) + 1;
        if (digits % 2 == 1) {
            printf("The number of digits is %d and is odd\n", digits);
        } else {
            printf("The number of digits is %d and is even\n", digits);
        }
    }
return 0;
}