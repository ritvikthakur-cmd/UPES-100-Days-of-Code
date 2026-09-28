#include <stdio.h>
int main() {
    int num, choice, steps;
    int d1, d2, d3, d4;
    int t;
    int asc, desc, result;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    if (num < 1000 || num > 9999) {
        printf("Error: not a valid 4-digit number.\n");
        return 0;
    }
    d1 = num / 1000;
    d2 = (num / 100) % 10;
    d3 = (num / 10) % 10;
    d4 = num % 10;
    if (d1 == d2 && d2 == d3 && d3 == d4) {
        printf("Error: rep digit numbers are not allowed.\n");
        return 0;
    }
    steps = 0;
    result = num;
    while (result != 6174) {
        d1 = result / 1000;
        d2 = (result / 100) % 10;
        d3 = (result / 10) % 10;
        d4 = result % 10;
        if (d1 < d2) { t = d1; d1 = d2; d2 = t; }
        if (d2 < d3) { t = d2; d2 = d3; d3 = t; }
        if (d3 < d4) { t = d3; d3 = d4; d4 = t; }
        if (d1 < d2) { t = d1; d1 = d2; d2 = t; }
        if (d2 < d3) { t = d2; d2 = d3; d3 = t; }
        if (d1 < d2) { t = d1; d1 = d2; d2 = t; }
        desc = d1 * 1000 + d2 * 100 + d3 * 10 + d4;
        asc = d4 * 1000 + d3 * 100 + d2 * 10 + d1;
        result = desc - asc;
        steps++;
        printf("Step %d: %d - %04d = %d\n", steps, desc, asc, result);
        if (steps > 7) {
            printf("Something went wrong, stopping.\n");
            return 0;
        }
    }
    printf("Reached Kaprekar's constant in %d steps!\n", steps);
    printf("1. Try another number\n");
    printf("2. Show total steps taken\n");
    printf("3. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            printf("Please run the program again to try another number.\n");
            break;
        case 2:
            printf("Total steps taken: %d\n", steps);
            break;
        case 3:
            printf("Exiting.\n");
            break;
        default:
            printf("Invalid choice.\n");
    }
    return 0;
}