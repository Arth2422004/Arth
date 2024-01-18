#include <stdio.h>

// User-Defined Function to calculate the length of a string
int calculateStringLength(char str[]) {
    int length = 0;

    // Iterate through the characters until the null character '\0' is encountered
    while (str[length] != '\0') {
        length++;
    }

    return length;
}

int main() {
    char inputString[100];

    // Input the string
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Call the UDF to calculate the length of the string
    int length = calculateStringLength(inputString);

    // Display the result
    printf("Length of the string: %d\n", length);

    return 0;
}
