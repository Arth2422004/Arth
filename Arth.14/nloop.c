#include <stdio.h>

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    int arth = 1;

    while (arth <= N) {
        printf("%d\n", arth);
        arth++;
    }

    return 0;
}
