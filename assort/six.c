#include <stdio.h>

#define MAX_SIZE 100

// Function to input elements of a square matrix
void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("Enter element at position matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display elements of a square matrix
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    printf("Matrix elements:\n");
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to compute the sum of diagonal elements
int sumDiagonalElements(int matrix[MAX_SIZE][MAX_SIZE], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += matrix[i][i];                   // Main diagonal
        sum += matrix[i][size - i - 1];        // Anti-diagonal
    }
    return sum;
}

int main() {
    int size;

    // Input the size of the square matrix
    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    // Check if the matrix is valid
    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    // Declare the square matrix
    int matrix[MAX_SIZE][MAX_SIZE];

    // Input elements for the matrix
    inputMatrix(matrix, size);

    // Display the matrix
    printf("\nMatrix:\n");
    displayMatrix(matrix, size);

    // Compute and display the sum of diagonal elements
    int diagonalSum = sumDiagonalElements(matrix, size);
    printf("\nSum of diagonal elements: %d\n", diagonalSum);

    return 0;
}
