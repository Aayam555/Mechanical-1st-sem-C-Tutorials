// WAP to find the length of the string without using the library function


#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Loop until the null character is found
    while (str[i] != '\0') {
        length++;
        i++;
    }

    // fgets captures the 'Enter' key as '\n'. 
    // We subtract 1 if the last character is a newline to get the actual text length.
    if (length > 0 && str[length - 1] == '\n') {
        length--;
    }

    printf("The length of the string is: %d\n", length);

    return 0;
}