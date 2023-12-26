#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 1; j <= rows - i; j++) {
            printf("%d", j);
            if (j < rows - i) {
                printf(" ");
            }
        }

        for (int k = 0; k < 2 * i; k++) {
            printf("  ");
        }

        for (int l = rows - i; l >= 1; l--) {
            if (l < rows - i) {
                printf(" ");
            }
            printf("%d", l);
        }

        printf("\n");
    }

    for (int i = rows - 1; i >= 0; i--) {
        for (int j = 1; j <= rows - i; j++) {
            printf("%d", j);
            if (j < rows - i) {
                printf(" ");
            }
        }

        for (int k = 0; k < 2 * i; k++) {
            printf("  ");
        }

        for (int l = rows - i; l >= 1; l--) {
            if (l < rows - i) {
                printf(" ");
            }
            printf("%d", l);
        }

        if (i > 0) {
            printf("\n");
        }
    }

    return 0;
}
