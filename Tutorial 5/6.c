/*WAP that reads a string from the user and use a user defined function to copy the
contents of the read string into another character array changing lowercase to upper if
any. Use a pointer to process string.*/

#include <stdio.h>

// Function prototype
void copyUpper(char *source, char *target);

int main() {
    char str1[100], str2[100];

    printf("Enter a string: ");
    scanf("%[^\n]", str1); // Read string with spaces

    // Passing base addresses of both arrays
    copyUpper(str1, str2);

    printf("\nOriginal String: %s", str1);
    printf("\nProcessed String: %s\n", str2);

    return 0;
}

// Function to copy and convert lowercase to uppercase
void copyUpper(char *src, char *tgt) {
    while (*src != '\0') {
        // Check if character is lowercase (ASCII 97 to 122)
        if (*src >= 'a' && *src <= 'z') {
            *tgt = *src - 32; // Convert to Uppercase
        } else {
            *tgt = *src; // Copy as it is (if already upper, digit, or symbol)
        }
        
        src++; // Move source pointer to next char
        tgt++; // Move target pointer to next char
    }
    
    *tgt = '\0'; // Crucial: Add null terminator to the end of target string
}