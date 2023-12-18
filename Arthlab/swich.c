#include <stdio.h>

int main() {

    char dayChar;

    printf("Enter the first character of the day (M, T, W, T, F, S, or S): ");
    scanf(" %c", &dayChar);  

    switch (dayChar) {
        case 'M':
        case 'm':
            printf("Monday\n");
            break;
        case 'T':
        case 't':
            printf("Tuesday\n");
            break;
        case 'W':
        case 'w':
            printf("Wednesday\n");
            break;
            printf("Thursday\n");
            break;
        case 'F':
        case 'f':
            printf("Friday\n");
            break;
        case 'S':
        case 's':
            printf("Saturday\n");
            break;
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a valid character (M, T, W, T, F, S, or S).\n");
            break;
    }

    return 0;
}
