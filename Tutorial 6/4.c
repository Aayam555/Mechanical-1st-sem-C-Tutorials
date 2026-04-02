/*WAP in C to write strings entered by the user to the text file “student.txt” until the user
presses Y or y. Also read the string*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fptr;
    char str[100];
    char choice;

    // 1. Writing to the file
    fptr = fopen("student.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file!");
        exit(1);
    }

    do {
        printf("Enter a string: ");
        scanf(" %[^\n]", str); // Read string with spaces
        
        fprintf(fptr, "%s\n", str); // Write string to file with a newline

        printf("Do you want to stop? (y/n): ");
        scanf(" %c", &choice);

    } while (choice != 'y' && choice != 'Y');

    fclose(fptr);

    // 2. Reading from the file
    fptr = fopen("student.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!");
        exit(1);
    }

    printf("\n--- Contents of student.txt ---\n");
    // fgets reads until newline or buffer limit
    while (fgets(str, 100, fptr) != NULL) {
        printf("%s", str);
    }

    fclose(fptr);
    return 0;
}