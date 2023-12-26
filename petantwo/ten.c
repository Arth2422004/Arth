#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = rows; j > i; j--) {
            printf("  ");
        }

        for (int k = 1; k <= i; k++) {
            printf("%d", k);
            if (k < i) {
                printf(" ");
            }
        }

        for (int l = i - 1; l >= 1; l--) {
            printf(" %d", l);
        }

        printf("\n");
    }

    return 0;
}
