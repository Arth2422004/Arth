#include <stdio.h>

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    if (N < 1) {
        printf("Please enter N.\n");
       
    }

    if (N % 2 != 0) {
        N--;
    }

    int i = N;

    do {
        printf("%d ", i);
        i -= 2;
    } while (i >= 2);

    return 0;
}
