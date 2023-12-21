#include <stdio.h>

int main() {
    char alphabet = 'a';

    do {
        printf("%c ",alphabet);
        alphabet++;
    } while (alphabet <= 'z');

    printf("\n");

    return 0;
}
