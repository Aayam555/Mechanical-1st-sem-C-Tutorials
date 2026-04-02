/*WAP to read two strings in main and then compare them using a user-defined function.
Display the appropriate message from main.
*/

#include <stdio.h>
#include <string.h>

// Function prototype: returns 0 if equal, 1 if different
int compareStrings(char s1[], char s2[]);

int main() {
    char str1[100], str2[100];
    int result;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline

    // Call user-defined function
    result = compareStrings(str1, str2);

    // Display message based on return value
    if (result == 0) {
        printf("\nResult: The strings are identical.\n");
    } else {
        printf("\nResult: The strings are different.\n");
    }

    return 0;
}

// User-defined function to compare strings
int compareStrings(char s1[], char s2[]) {
    int i = 0;

    // Iterate while characters match and we haven't reached the end of either string
    while (s1[i] != '\0' || s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 1; // Mismatch found
        }
        i++;
    }

    return 0; // Strings are identical
}