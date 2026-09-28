#include <stdio.h>
#include <math.h>
int num;
int digits;
int main() {
    
    printf("Enter a number: ");
    scanf("%d", &num);
    digits = (int)log10(num) + 1;
    printf("The number of digits is %d and is even\n", digits);
    return 0;      
    }

