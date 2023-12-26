#include <stdio.h>

int main() {
    int N;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &N);

    int arr[N];

    printf("Enter %d elements:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += arr[i];
    }

    float average = (float)sum / N;

    printf("The average of the array is: %.2f\n", average);

    return 0;
}
