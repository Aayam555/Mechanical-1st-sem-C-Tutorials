/* WAP in C to append the characters entered by the user in the existing file “student.txt”
until the user presses enter key.*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char ch;

    // Opening "student.txt" in append mode
    // If the file doesn't exist, it will be created.
    fptr = fopen("student.txt", "a");

    if (fptr == NULL) {
        printf("Error: Could not open or create the file.\n");
        exit(1);
    }

    printf("Enter text to append to 'student.txt' (Press ENTER to stop):\n");

    // Reading characters from keyboard until user presses Enter (\n)
    while ((ch = getchar()) != '\n') {
        fputc(ch, fptr); // Writing character to the end of the file
    }

    // Optional: add a newline at the end of the entry for better formatting
    fputc('\n', fptr);

    fclose(fptr); // Closing the file to ensure data is saved
    printf("\nData successfully appended to student.txt.\n");

    return 0;
}
