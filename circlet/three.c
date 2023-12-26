#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = rows; j > i; j--) {
            printf(" ");
        }

        for (int k = i; k <= rows; k++) {
            printf("%d", k);
            if (k < rows) {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}
