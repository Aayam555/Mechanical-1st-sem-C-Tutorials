//WAP to display all the characters in a given range

#include <stdio.h>

int main() {
    char start, end;

    printf("Enter the starting character: ");
    scanf(" %c", &start);

    printf("Enter the ending character: ");
    scanf(" %c", &end);

    printf("\nCharacters between '%c' and '%c' are:\n", start, end);

    // If the user enters range in reverse (e.g., 'z' to 'a')
    if (start > end) {
        for (char i = start; i >= end; i--) {
            printf("%c ", i);
        }
    } 
    // Standard ascending range (e.g., 'a' to 'z')
    else {
        for (char i = start; i <= end; i++) {
            printf("%c ", i);
        }
    }

    printf("\n");
    return 0;
}
