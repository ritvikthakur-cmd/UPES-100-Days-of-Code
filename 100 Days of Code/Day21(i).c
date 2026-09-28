#include <stdio.h>
int main()
{
    int n, first, last, middle, divisor = 1;
    int result;
    printf("Enter a number: ");
    scanf("%d", &n);
    last = n % 10;
    while(n / divisor >= 10)
    {
        divisor = divisor * 10;
    }
    first = n / divisor;
    middle = (n % divisor) / 10;
    result = last * divisor + middle * 10 + first;
    printf("Number after swapping = %d\n", result);
    return 0;
} 