#include <stdio.h>

// User-Defined Function to perform addition
double add(double a, double b) {
    return a + b;
}

// User-Defined Function to perform subtraction
double subtract(double a, double b) {
    return a - b;
}

// User-Defined Function to perform multiplication
double multiply(double a, double b) {
    return a * b;
}

// User-Defined Function to perform division
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero.\n");
        return 0;
    }
}

int main() {
    int choice;
    double num1, num2;

    // Infinite loop for calculator
    while (1) {
        // Display menu
        printf("\nCalculator Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");

        // Input user choice
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        // Check user choice
        if (choice == 5) {
            printf("Exiting the calculator. Goodbye!\n");
            break; // Exit the loop if the user chooses 5
        }

        // Input two numbers
        printf("Enter the first number: ");
        scanf("%lf", &num1);
        printf("Enter the second number: ");
        scanf("%lf", &num2);

        // Perform the selected operation using switch case
        switch (choice) {
            case 1:
                printf("Result: %.2lf\n", add(num1, num2));
                break;
            case 2:
                printf("Result: %.2lf\n", subtract(num1, num2));
                break;
            case 3:
                printf("Result: %.2lf\n", multiply(num1, num2));
                break;
            case 4:
                printf("Result: %.2lf\n", divide(num1, num2));
                break;
            default:
                printf("Invalid choice. Please choose a valid operation.\n");
        }
    }

    return 0;
}
