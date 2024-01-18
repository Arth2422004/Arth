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

    // Calculate column-wise sum and store in a separate array
    int colSum[cols];
    for (int j = 0; j < cols; ++j) {
        colSum[j] = 0;
        for (int i = 0; i < rows; ++i) {
            colSum[j] += arr[i][j];
        }
    }

    // Display the column-wise sum
    printf("Column-wise sum of the 2D array:\n");
    for (int j = 0; j < cols; ++j) {
        printf("Sum of column %d: %d\n", j + 1, colSum[j]);
    }

    return 0;
}
