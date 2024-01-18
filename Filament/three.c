#include <stdio.h>
#include <string.h>

void replaceCharacter(char str[], char oldChar, char newChar) {
    for (int i = 0; i < strlen(str); ++i) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
}

int main() {
    char inputString[50];
    char oldCharacter, newCharacter;

    // Input the string
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Input the character to replace
    printf("Enter the character to replace: ");
    scanf(" %c", &oldCharacter);

    // Input the new character
    printf("Enter the new character: ");
    scanf(" %c", &newCharacter);

    // Replace the character
    replaceCharacter(inputString, oldCharacter, newCharacter);

    // Display the modified string
    printf("Modified string: %s\n", inputString);

    return 0;
}
