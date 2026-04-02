/*Using the concept of pointer, write a program to count the number of characters and the
number of words in a line of text entered by the user.
*/

#include <stdio.h>

int main() {
    char text[200];
    char *ptr;
    int characters = 0, words = 0;
    int inWord = 0; // Flag to track if we are currently inside a word

    printf("Enter a line of text: ");
    scanf("%[^\n]", text); // Reads string with spaces until newline

    ptr = text; // Initialize pointer to the start of the string

    while (*ptr != '\0') {
        // Count every character (including spaces)
        characters++;

        // Logic to count words
        if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n') {
            inWord = 0; // We hit a space, so we are no longer in a word
        } else if (inWord == 0) {
            inWord = 1; // We hit a non-space character after a space
            words++;    // Increment word count
        }

        ptr++; // Move pointer to the next memory address
    }

    printf("\n--- Results ---\n");
    printf("Total Characters: %d\n", characters);
    printf("Total Words: %d\n", words);

    return 0;
}
