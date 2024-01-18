#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    int totalElements = rows * cols;

    printf("The length of the 2D array is: %d\n", totalElements);

    return 0;
}
