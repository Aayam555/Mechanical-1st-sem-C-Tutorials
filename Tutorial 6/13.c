/* WAP to input and save records like name, roll, address and obtained marks of 48
students in a binary file and search and display the record of a student whose obtained
marks is highest. The information should be organized in a structure.
*/

#include <stdio.h>
#include <stdlib.h>

// Structure to organize student information
struct Student {
    char name[50];
    int roll;
    char address[100];
    float marks;
};

int main() {
    FILE *fptr;
    struct Student s, highest;
    int i;

    // --- PHASE 1: INPUT AND SAVE TO BINARY FILE ---
    fptr = fopen("students.dat", "wb"); // 'wb' for Write Binary
    if (fptr == NULL) {
        printf("Error: Could not open file for writing.\n");
        exit(1);
    }

    printf("Enter details for 48 students:\n");
    for (i = 0; i < 48; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s.name);
        printf("Roll No: ");
        scanf("%d", &s.roll);
        printf("Address: ");
        scanf(" %[^\n]", s.address);
        printf("Marks: ");
        scanf("%f", &s.marks);

        // Write the structure block to the binary file
        fwrite(&s, sizeof(struct Student), 1, fptr);
    }
    fclose(fptr);

    // --- PHASE 2: SEARCH FOR HIGHEST MARKS ---
    fptr = fopen("students.dat", "rb"); // 'rb' for Read Binary
    if (fptr == NULL) {
        printf("Error: Could not open file for reading.\n");
        exit(1);
    }

    // Initialize highest with the first record to start comparison
    fread(&highest, sizeof(struct Student), 1, fptr);

    // Continue reading the rest of the records
    while (fread(&s, sizeof(struct Student), 1, fptr) == 1) {
        if (s.marks > highest.marks) {
            highest = s; // Update highest student record
        }
    }
    fclose(fptr);

    // --- DISPLAY THE RESULT ---
    printf("\n------------------------------------");
    printf("\nStudent with the Highest Marks:");
    printf("\n------------------------------------");
    printf("\nName:    %s", highest.name);
    printf("\nRoll No: %d", highest.roll);
    printf("\nAddress: %s", highest.address);
    printf("\nMarks:   %.2f", highest.marks);
    printf("\n------------------------------------\n");

    return 0;
}