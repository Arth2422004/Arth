#include <stdio.h>

int main() {
    int N, M;

    printf("Enter the number of elements in the first array: ");
    scanf("%d", &N);

    printf("Enter the number of elements in the second array: ");
    scanf("%d", &M);

    int arr1[N], arr2[M], mergedArray[N + M];

    printf("Enter %d elements for the first array:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    printf("Enter %d elements for the second array:\n", M);
    for (int i = 0; i < M; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < N; i++) {
        mergedArray[i] = arr1[i];
    }

    for (int i = 0; i < M; i++) {
        mergedArray[N + i] = arr2[i];
    }

    printf("The merged array is:\n");
    for (int i = 0; i < N + M; i++) {
        printf("%d ", mergedArray[i]);
    }

    return 0;
}
