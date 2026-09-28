#include <stdio.h>
int main() {
    int n, sum = 0, num = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        sum += num;   // add current odd number
        num += 2;     // move to next odd number
    }
    printf("Sum of first %d odd numbers = %d\n", n, sum);
    return 0;
}