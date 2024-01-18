#include <stdio.h>

// User-Defined Function to calculate the sum of array elements
int calculateArraySum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Check if the array size is valid
    if (size <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    // Declare an array of size 'size'
    int arr[size];

    // Input elements for the array
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; ++i) {
        printf("Enter element at position arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Call the UDF to calculate the sum of array elements
    int sum = calculateArraySum(arr, size);

    // Display the result
    printf("Sum of array elements: %d\n", sum);

    return 0;
}
