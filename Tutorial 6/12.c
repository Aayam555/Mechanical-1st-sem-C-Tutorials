/*WAP to write name, roll no and age of five students into a disk file named
“STUDENT.DAT”*/


#include <stdio.h>
#include <stdlib.h>

// Defining a structure to hold student details
struct Student {
    char name[50];
    int roll;
    int age;
};

int main() {
    FILE *fptr;
    struct Student s[5]; // Array to hold 5 students
    int i;

    // Opening the file in write mode ("w")
    fptr = fopen("STUDENT.DAT", "w");

    if (fptr == NULL) {
        printf("Error: Could not create or open STUDENT.DAT\n");
        exit(1);
    }

    printf("Enter details for 5 students:\n");

    for (i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name); // Reads string with spaces
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Age: ");
        scanf("%d", &s[i].age);

        // Writing the data into the file in a formatted way
        fprintf(fptr, "%s %d %d\n", s[i].name, s[i].roll, s[i].age);
    }

    fclose(fptr); // Close the file to save data
    printf("\nData successfully written to STUDENT.DAT\n");

    return 0;
}