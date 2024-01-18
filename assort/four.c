#include <stdio.h>

#define MAX_SIZE 100

// Function to input elements of a matrix
void inputMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter element at position matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display elements of a matrix
void displayMatrix(int matrix[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    printf("Matrix elements:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int matrix1[MAX_SIZE][MAX_SIZE], int matrix2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

int main() {
    int rows, cols;

    // Input the size of the matrices
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Check if the matrices are compatible for addition
    if (rows <= 0 || cols <= 0 || rows > MAX_SIZE || cols > MAX_SIZE) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    // Declare two matrices and the result matrix
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];

    // Input elements for the first matrix
    printf("For the first matrix:\n");
    inputMatrix(matrix1, rows, cols);

    // Input elements for the second matrix
    printf("For the second matrix:\n");
    inputMatrix(matrix2, rows, cols);

    // Add the matrices
    addMatrices(matrix1, matrix2, result, rows, cols);

    // Display the matrices and the result
    printf("\nMatrix 1:\n");
    displayMatrix(matrix1, rows, cols);

    printf("\nMatrix 2:\n");
    displayMatrix(matrix2, rows, cols);

    printf("\nResultant Matrix (Sum of Matrix 1 and Matrix 2):\n");
    displayMatrix(result, rows, cols);

    return 0;
}
