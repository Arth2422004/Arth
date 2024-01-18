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

    // Calculate diagonal sum
    int mainDiagonalSum = 0, secondaryDiagonalSum = 0;
    for (int i = 0; i < size; ++i) {
        mainDiagonalSum += arr[i][i];
        secondaryDiagonalSum += arr[i][size - i - 1];
    }

    // Display the diagonal sums
    printf("Main Diagonal Sum: %d\n", mainDiagonalSum);
    printf("Secondary Diagonal Sum: %d\n", secondaryDiagonalSum);

    return 0;
}
