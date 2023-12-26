#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        // Print spaces
        for (int j = rows; j > i; j--) {
            printf("  ");
        }
        for (int k = i; k >= 1; k--) {
            printf("%d", k);
            if (k > 1) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
