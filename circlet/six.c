#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = rows; j > i; j--) {
            printf("  ");
        }

        for (int k = i; k <= 2 * i - 1; k++) {
            printf("%d", k);
            if (k < 2 * i - 1) {
                printf(" ");
            }
        }

        for (int l = 2 * i - 2; l >= i; l--) {
            printf(" %d", l);
        }
        printf("\n");
    }

    return 0;
}
