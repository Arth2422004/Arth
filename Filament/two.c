#include <stdio.h>
#include <string.h>

int main() {
    // String declaration and initialization
    char str1[50] = "Hello";
    char str2[50] = " World!";

    // String length using strlen
    printf("Length of str1: %lu\n", strlen(str1));

    // String concatenation using strcat
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // String copy using strcpy
    char str3[50];
    strcpy(str3, str1);
    printf("Copied string (str3): %s\n", str3);

    // String comparison using strcmp
    if (strcmp(str1, str3) == 0) {
        printf("str1 and str3 are equal.\n");
    } else {
        printf("str1 and str3 are not equal.\n");
    }

    // String substring using strstr
    char *substring = strstr(str1, "World");
    if (substring != NULL) {
        printf("Substring 'World' found at position: %ld\n", substring - str1);
    } else {
        printf("Substring 'World' not found.\n");
    }

    return 0;
}
