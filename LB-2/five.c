#include <stdio.h>

int main() {
    int rows, cols;

    // Input the number of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare a 2D array of size rows x cols
    int arr[rows][cols];

    // Input elements for the 2D array
    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            printf("Enter element at position arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate row-wise sum and store in a separate array
    int rowSum[rows];
    for (int i = 0; i < rows; ++i) {
        rowSum[i] = 0;
        for (int j = 0; j < cols; ++j) {
            rowSum[i] += arr[i][j];
        }
    }

    // Display the row-wise sum
    printf("Row-wise sum of the 2D array:\n");
    for (int i = 0; i < rows; ++i) {
        printf("Sum of row %d: %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
