#include <stdio.h>

// User-Defined Function to check if a number is divisible by both 3 and 5
int isDivisibleBy3And5(int number) {
    return (number % 3 == 0) && (number % 5 == 0);
}

int main() {
    int num;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Call the UDF to check divisibility by 3 and 5
    if (isDivisibleBy3And5(num)) {
        printf("%d is divisible by both 3 and 5.\n", num);
    } else {
        printf("%d is not divisible by both 3 and 5.\n", num);
    }

    return 0;
}
