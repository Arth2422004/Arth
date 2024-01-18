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

    // Calculate cross-diagonal sum
    int diagonalSum = 0, antiDiagonalSum = 0;
    for (int i = 0; i < size; ++i) {
        diagonalSum += arr[i][i];
        antiDiagonalSum += arr[i][size - i - 1];
    }

    // Display the cross-diagonal sum
    printf("Cross-Diagonal Sum: %d\n", diagonalSum + antiDiagonalSum);

    return 0;
}
