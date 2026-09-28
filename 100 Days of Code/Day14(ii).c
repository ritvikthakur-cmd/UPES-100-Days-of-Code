#include <stdio.h>
int main() {
    int n;
    long long product = 1;
    int hasEven = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            product *= i;
            hasEven = 1;
        }
    }
    if (hasEven)
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    else
        printf("No even numbers between 1 and %d\n", n);
    return 0;
}