/*WAP to convert a lowercase character into uppercase character and vice versa using the
concept of call by reference.
*/

#include <stdio.h>

// Function prototype: Takes a pointer to a char
void toggleCase(char *ch);

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    printf("\nBefore conversion: %c", c);

    // Call by Reference: Passing the address of 'c'
    toggleCase(&c);

    printf("\nAfter conversion:  %c\n", c);

    return 0;
}

// Function definition
void toggleCase(char *ch) {
    // Dereference the pointer to check the value
    if (*ch >= 'a' && *ch <= 'z') {
        // Convert Lowercase to Uppercase
        *ch = *ch - 32;
    } 
    else if (*ch >= 'A' && *ch <= 'Z') {
        // Convert Uppercase to Lowercase
        *ch = *ch + 32;
    }
    // If it's a digit or symbol, it remains unchanged
}