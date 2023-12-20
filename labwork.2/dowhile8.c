#include <stdio.h>

int main() {
    int N, sum = 0, i = 1;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("Please enter a N.\n");

    }

    do {
        sum += i;
        i++;
    } while (i <= N);

    printf("Sum of numbers from 1 to %d is: %d\n", N, sum);

    return 0;
}
