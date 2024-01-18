#include <stdio.h>

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare an array of size 'size'
    int arr[size];

    // Input elements for the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Enter element at position arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Print negative elements
    printf("Negative elements in the array:\n");
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}
