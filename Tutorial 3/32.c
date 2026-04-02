//WAP to copy strings without using library functions.

#include <stdio.h>

int main() {
    char source[100], destination[100];
    int i = 0;

    printf("Enter the source string: ");
    fgets(source, sizeof(source), stdin);

    // Copying character by character
    while (source[i] != '\0') {
        destination[i] = source[i];
        i++;
    }

    // Crucial: Manually add the null terminator to the destination string
    destination[i] = '\0';

    printf("Source string: %s", source);
    printf("Destination string: %s", destination);

    return 0;
}