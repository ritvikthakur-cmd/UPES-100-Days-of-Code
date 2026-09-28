#include <stdio.h>
int main()
{
    int n, i;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i < n; i++)
    {
        if(n % i == 0)
        {
            sum = sum + i;
        }
    }
    if(sum == n)
    {
        printf("Number is a perfect number\n");
    }
    else
    {
        printf("Number is not a perfect number\n");
    }
    return 0;
} 