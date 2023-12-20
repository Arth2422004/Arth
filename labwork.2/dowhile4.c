#include <stdio.h>

int main() {
    int N;


    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("Please enter N.\n");
    }

    int i = N;

    do {
        printf("%d ", i);
        i--;
    } while (i >= 1);

    return 0;
}
