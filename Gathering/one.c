#include <stdio.h>

// Function to calculate factorial using recursion
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // Input the number
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the number is non-negative
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call the recursive function to calculate factorial
        unsigned long long result = factorial(num);

        // Display the result
        printf("Factorial of %d = %llu\n", num, result);
    }

    return 0;
}
