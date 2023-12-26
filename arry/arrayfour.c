#include <stdio.h>

int main() {
    int N;

    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &N);

    int arr1[N], arr2[N], sumArray[N];

    printf("Enter %d elements for the first array:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements for the second array:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < N; i++) {
        sumArray[i] = arr1[i] + arr2[i];
    }

    printf("The sum of the arrays is:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", sumArray[i]);
    }

    return 0;
}
