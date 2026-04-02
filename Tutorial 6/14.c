// Write a program in C to create a file named “subject.txt” that stores the subject name.
//Subject code and full marks where subject name and subject codes are strings and full
//marks is float. Also display all the records stored in the file. WAP to keep the records of
//10 students and display all the records from the file.


#include <stdio.h>
#include <stdlib.h>

// Structure to organize subject information
struct Subject {
    char name[50];
    char code[20];
    float full_marks;
};

int main() {
    FILE *fptr;
    struct Subject s;
    int i;

    // --- PHASE 1: WRITING TO THE FILE ---
    // Opening "subject.txt" in write mode
    fptr = fopen("subject.txt", "w");
    if (fptr == NULL) {
        printf("Error: Could not create file!\n");
        exit(1);
    }

    printf("Enter details for 10 subjects:\n");
    for (i = 0; i < 10; i++) {
        printf("\nSubject %d details:\n", i + 1);
        printf("Enter Subject Name: ");
        scanf(" %[^\n]", s.name); // Reads string with spaces
        printf("Enter Subject Code: ");
        scanf("%s", s.code);
        printf("Enter Full Marks: ");
        scanf("%f", &s.full_marks);

        // Writing formatted data to the text file
        fprintf(fptr, "%s %s %.2f\n", s.name, s.code, s.full_marks);
    }

    fclose(fptr); // Closing file after writing
    printf("\nData successfully saved to subject.txt.\n");

    // --- PHASE 2: READING FROM THE FILE ---
    fptr = fopen("subject.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open file for reading!\n");
        exit(1);
    }

    printf("\n--- Records Stored in subject.txt ---\n");
    printf("%-20s %-15s %-10s\n", "Subject Name", "Code", "Full Marks");
    printf("----------------------------------------------------------\n");

    // Reading until the end of the file
    // fscanf returns the number of items successfully matched and assigned
    while (fscanf(fptr, "%s %s %f", s.name, s.code, &s.full_marks) != EOF) {
        printf("%-20s %-15s %-10.2f\n", s.name, s.code, s.full_marks);
    }

    fclose(fptr); // Closing file after reading
    return 0;
}
