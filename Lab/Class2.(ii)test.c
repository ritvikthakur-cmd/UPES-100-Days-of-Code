#include <stdio.h>
int main() {
    int num ;
    printf("Input a number: ");
    scanf("%d", &num);
    switch(num) {
        // Switch works for only integer values. It does not work for float or double values.
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid");
    }return 0;
}