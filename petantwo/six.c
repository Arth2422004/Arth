#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            printf("  ");
        }

        for (int k = rows; k > i; k--) {
            printf("%d", k);
            if (k > i + 1) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
