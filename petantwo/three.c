#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = rows; j > i; j--) {
            printf(" ");
        }
    for (int k = 1; k <= i; k++) {
            printf("%d", i);
            if (k < i) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
