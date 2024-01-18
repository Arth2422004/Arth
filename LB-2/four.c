#include <stdio.h>

int main() {
    int rows, cols;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare three 2D arrays of size rows x cols
    int arr1[rows][cols], arr2[rows][cols], sumArray[rows][cols];

    // Input elements for the first 2D array
    printf("Enter elements for the first 2D array:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter element at position arr1[%d][%d]: ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }

    // Input elements for the second 2D array
    printf("Enter elements for the second 2D array:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter element at position arr2[%d][%d]: ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // Perform addition and store the result in sumArray
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sumArray[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // Display the result
    printf("Resultant 2D array after addition:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("%d\t", sumArray[i][j]);
        }
        printf("\n");
    }

    return 0;
}

