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

    // Find the largest number
    int largest = arr[0];  // Assume the first element is the largest

    for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    // Print the largest number
    printf("The largest number in the array is: %d\n", largest);

    return 0;
}
