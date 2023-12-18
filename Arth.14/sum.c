#include <stdio.h>

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);


    int arth = 1;
    int sum = 0;

    while (arth <= N) {
        sum += arth;
        arth++;
    }

    printf("Sum of numbers from 1 to %d is: %d\n", N, sum);

    return 0;
}
