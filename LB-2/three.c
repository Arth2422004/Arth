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

    // Calculate the sum of all elements
    int sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum += arr[i][j];
        }
    }

    // Calculate the average
    float average = (float)sum / (rows * cols);

    // Print the average
    printf("The average of the 2D array is: %.2f\n", average);

    return 0;
}
