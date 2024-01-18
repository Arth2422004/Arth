#include <stdio.h>

// Function to display the elements of the array
void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to insert an element at a specified position
void insertElement(int arr[], int *size, int position, int element) {
    if (position < 0 || position > *size) {
        printf("Invalid position for insertion.\n");
        return;
    }

    // Shift elements to the right to make space for the new element
    for (int i = *size; i > position; --i) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element
    arr[position] = element;

    // Increment the size of the array
    (*size)++;

    printf("Element %d inserted at position %d.\n", element, position);
}

// Function to delete an element from a specified position
void deleteElement(int arr[], int *size, int position) {
    if (position < 0 || position >= *size) {
        printf("Invalid position for deletion.\n");
        return;
    }

    // Shift elements to the left to fill the gap
    for (int i = position; i < *size - 1; ++i) {
        arr[i] = arr[i + 1];
    }

    // Decrement the size of the array
    (*size)--;

    printf("Element deleted from position %d.\n", position);
}

// Function to update an element at a specified position
void updateElement(int arr[], int size, int position, int newElement) {
    if (position < 0 || position >= size) {
        printf("Invalid position for update.\n");
        return;
    }

    // Update the element at the specified position
    arr[position] = newElement;

    printf("Element at position %d updated to %d.\n", position, newElement);
}

int main() {
    int size, position, element, newElement;

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

    // Display the original array
    displayArray(arr, size);

    // Insert an element
    printf("Enter position and element for insertion: ");
    scanf("%d %d", &position, &element);
    insertElement(arr, &size, position, element);
    displayArray(arr, size);

    // Delete an element
    printf("Enter position for deletion: ");
    scanf("%d", &position);
    deleteElement(arr, &size, position);
    displayArray(arr, size);

    // Update an element
    printf("Enter position and new element for update: ");
    scanf("%d %d", &position, &newElement);
    updateElement(arr, size, position, newElement);
    displayArray(arr, size);

    return 0;
}
