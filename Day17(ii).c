#include <stdio.h>
int i;
int main () {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int count = 0;
    if (n <= 1) {
        printf("Not prime\n");
        return 0;
    }
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
        }
    }
    if (count == 2) {
        printf("Prime\n");
    } else {
        printf("Not prime\n");
    }

    return 0;
}