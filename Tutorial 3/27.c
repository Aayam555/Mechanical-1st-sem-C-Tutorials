//WAP to reverse a string entered by the user using the library function.


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the trailing newline character added by fgets
    str[strcspn(str, "\n")] = '\0';

    // Using the library function to reverse the string
    strrev(str);

    printf("Reversed string: %s\n", str);

    return 0;
}