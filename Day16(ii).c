#include <stdio.h>
int main() {
    int n;
    printf("Enter number : ");
    scanf("%d", &n);
    int temp = n; 
    int reversed = 0; 
    while (temp > 0) {
        int rem = temp % 10;                
        reversed = (reversed * 10) + rem;   
        temp = temp / 10;                   
    }
    if (reversed == n) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
