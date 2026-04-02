//WAP to read a string and rewrite its characters in alphabetical order.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, j, len;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = '\0';
    
    len = strlen(str);

    // Bubble Sort algorithm to sort characters
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - i - 1; j++) {
            // Compare ASCII values of adjacent characters
            if (str[j] > str[j + 1]) {
                // Swap the characters
                temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    printf("String in alphabetical order: %s\n", str);

    return 0;
}