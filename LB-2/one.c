#include <stdio.h>

int main() {
    int N;

    printf("Enter the size of the 2D array (N): ");
    scanf("%d", &N);

    int arr[N][N];

    printf("Enter the elements of the 2D array:\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("Enter element at position arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("The 2D array is:\n");
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
