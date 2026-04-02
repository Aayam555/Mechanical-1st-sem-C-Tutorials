//WAP to reverse a string without using the library function.

#include <stdio.h>

int main() {
    char str[100], temp;
    int i, j, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Step 1: Find the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Remove the newline character if fgets captured it
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    // Step 2: Reverse the string using two pointers
    i = 0;           // Start of the string
    j = length - 1;  // End of the string

    while (i < j) {
        // Swap characters at i and j
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }

    printf("Reversed string: %s\n", str);

    return 0;
}