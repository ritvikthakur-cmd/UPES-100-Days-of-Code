#include <stdio.h>
int main() {
    char grade;
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    switch(grade) {
        case 'A':
        case 'A+':
            printf("Excellent!\n");
            break;
        case 'B':
        case 'B+':
            printf("Good!\n");
            break;
        case 'C':
            printf("Needs Improvement!\n");
            break;
        case 'D':
            printf("Needs Improvement!\n");
            break;
        case 'F':
            printf("Fail!\n");
            break;
        default:
        printf("Invalid Grade!\n");
}
return 0;
}