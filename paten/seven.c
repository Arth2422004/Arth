#include <stdio.h>

int main() {
    int rows = 5;
    char current_char = 'A';

    for (int i = 0; i < rows; i++) {
        char print_char = current_char + i;
        for (int j = 0; j <= i; j++) {
            printf("%c ", print_char);
            print_char--;
        }
        printf("\n");
    }

    return 0;
}
