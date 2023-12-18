#include <stdio.h>

int main() {
    int N;

    printf("Enter a number N  table: ");
    scanf("%d", &N);

    int mul = 1;

    printf("Multiplication table of %d:\n", N);

    while (mul <= 10) {
        printf("%d x %d = %d\n", N, mul, N * mul);
        mul++;
    }

    return 0;
}
