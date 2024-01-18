#include <stdio.h>

int main() {
    int size;

    // Input the size of the square 2D array
    printf("Enter the size of the square 2D array: ");
    scanf("%d", &size);

    // Declare a square 2D array of size x size
    int arr[size][size];

    // Input elements for the 2D array
    printf("Enter the elements of the square 2D array:\n");
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("Enter element at position arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate anti-diagonal sum
    int antiDiagonalSum = 0;
    for (int i = 0; i < size; ++i) {
        antiDiagonalSum += arr[i][size - i - 1];
    }

    // Display the anti-diagonal sum
    printf("Anti-Diagonal Sum: %d\n", antiDiagonalSum);

    return 0;
}
