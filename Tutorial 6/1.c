/*WAP in C to write the characters into a text file “student.txt” entered by the user until the
user presses the enter key. Also, read the text file using the concept of character input
from the file*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char ch;

    // 1. Writing to the file
    fptr = fopen("student.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file for writing!\n");
        exit(1);
    }

    printf("Enter text (Press ENTER to stop):\n");
    while ((ch = getchar()) != '\n') {
        fputc(ch, fptr); // Write character to file
    }
    fclose(fptr); // Close after writing

    // 2. Reading from the file
    fptr = fopen("student.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file for reading!\n");
        exit(1);
    }

    printf("\nContents of \"student.txt\":\n");
    // Read until End of File (EOF)
    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch); // Display character on screen
    }

    fclose(fptr); // Final close
    printf("\n");

    return 0;
}