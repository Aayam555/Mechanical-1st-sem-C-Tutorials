/*WAP to continuously read the name, age and salary of a worker and write it into a file
until the user confirms to end. Then read n from the user and display the nth record in
the file. Details of the worker must be represented by a structure.
*/

#include <stdio.h>
#include <stdlib.h>

// Structure to represent a worker
struct Worker {
    char name[50];
    int age;
    float salary;
};

int main() {
    FILE *fptr;
    struct Worker w;
    char choice;
    int n;

    // --- PHASE 1: WRITING TO THE FILE ---
    fptr = fopen("worker.dat", "ab"); // Open in Append Binary mode
    if (fptr == NULL) {
        printf("Error opening file!");
        exit(1);
    }

    do {
        printf("\nEnter Worker Details:\n");
        printf("Name: ");
        scanf(" %[^\n]", w.name);
        printf("Age: ");
        scanf("%d", &w.age);
        printf("Salary: ");
        scanf("%f", &w.salary);

        // Write the entire structure to the file
        fwrite(&w, sizeof(struct Worker), 1, fptr);

        printf("Do you want to add another record? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    fclose(fptr);

    // --- PHASE 2: READING THE Nth RECORD ---
    fptr = fopen("worker.dat", "rb"); // Open in Read Binary mode
    if (fptr == NULL) {
        printf("Error opening file for reading!");
        exit(1);
    }

    printf("\nEnter the record number (n) you want to display: ");
    scanf("%d", &n);

    // Calculate offset: (n-1) * size of one structure
    // Seek from the beginning (SEEK_SET)
    fseek(fptr, (n - 1) * sizeof(struct Worker), SEEK_SET);

    // Read the specific record
    if (fread(&w, sizeof(struct Worker), 1, fptr) == 1) {
        printf("\n--- Details of Record %d ---\n", n);
        printf("Name: %s\n", w.name);
        printf("Age: %d\n", w.age);
        printf("Salary: %.2f\n", w.salary);
    } else {
        printf("\nError: Record %d does not exist.\n", n);
    }

    fclose(fptr);
    return 0;
}