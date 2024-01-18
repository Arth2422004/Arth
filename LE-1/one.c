#include <stdio.h>

// User-Defined Function to calculate the cube of a number
double calculateCube(double number) {
    return number * number * number;
}

int main() {
    double num;

    // Input the number
    printf("Enter a number: ");
    scanf("%lf", &num);

    // Call the UDF to calculate the cube
    double result = calculateCube(num);

    // Display the result
    printf("The cube of %.2lf is: %.2lf\n", num, result);

    return 0;
}
