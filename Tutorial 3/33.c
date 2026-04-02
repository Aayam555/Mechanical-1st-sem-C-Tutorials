//WAP to concatenate two strings without using the library function

#include <stdio.h>

int main() {
    char str1[100], str2[50];
    int i = 0, j = 0;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    // Remove the newline character if present
    while (str1[i] != '\n' && str1[i] != '\0') i++;
    str1[i] = '\0'; 

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    // Remove the newline character if present
    while (str2[j] != '\n' && str2[j] != '\0') j++;
    str2[j] = '\0';

    // Reset counters for concatenation
    i = 0;
    while (str1[i] != '\0') {
        i++; // Move i to the end of the first string
    }

    j = 0;
    while (str2[j] != '\0') {
        str1[i] = str2[j]; // Append character from str2 to str1
        i++;
        j++;
    }

    str1[i] = '\0'; // Add the final null terminator

    printf("\nConcatenated string: %s\n", str1);

    return 0;
}
