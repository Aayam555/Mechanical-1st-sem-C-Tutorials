/*WAP to read the name and roll number of 48 students from the user and store them in
file. If the file already contains data, your program should add new data at the end of the
file.
*/

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
};

int main() {
    FILE *fptr;
    struct Student s;
    int i;

    // Opening in "a" (Append) mode
    // This adds data to the end of the file if it exists,
    // or creates a new file if it doesn't.
    fptr = fopen("students_record.txt", "a");

    if (fptr == NULL) {
        printf("Error: Could not open file!\n");
        exit(1);
    }

    printf("--- Enter Details for 48 Students ---\n");

    for (i = 1; i <= 48; i++) {
        printf("\nStudent %d:\n", i);
        printf("Enter Name: ");
        scanf(" %[^\n]", s.name); // Reads string with spaces
        printf("Enter Roll Number: ");
        scanf("%d", &s.roll);

        // Writing formatted data to the file
        fprintf(fptr, "Roll: %d | Name: %s\n", s.roll, s.name);
        
        printf("Record for student %d saved.\n", i);
    }

    fclose(fptr); // Close the file to save all changes
    printf("\nAll 48 records have been appended to 'students_record.txt'.\n");

    return 0;
}
