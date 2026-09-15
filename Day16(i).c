#include <stdio.h>
int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    if (n == 0) {
        printf("0\n");
    }
    int binary = 0;
    int place = 1;

    while (n > 0) {
        int rem = n % 2;
        binary = binary + (rem * place); 
        n = n / 2;
        place = place * 10;            
    }

    printf("%d\n", binary);
    return 0;
}