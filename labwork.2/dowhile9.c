#include <stdio.h>

int main() {
    int N, i = 1;

    printf("Enter the table: ");
    scanf("%d", &N);

    printf("Multiplication table of %d:\n", N);

    do {
        printf("%d x %d = %d\n", N, i, N * i);
        i++;
    } while (i <= 10);

    return 0;
}
