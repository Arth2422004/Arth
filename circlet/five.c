#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
            if (j < i) {
                printf(" ");
            }
        }

        for (int k = 0; k < 2 * (rows - i); k++) {
            printf("  ");
        }

        for (int l = i; l > 0; l--) {
            if (l < i) {
                printf(" %d", l);
            } else {
                printf("%d", l);
            }
        }

        printf("\n");
    }

    return 0;
}
