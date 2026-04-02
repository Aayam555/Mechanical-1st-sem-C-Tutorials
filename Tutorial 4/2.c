/*Create a structure named student having name, roll, marks and remarks as
members. Assume appropriate types and size of members. WAP using structure
to read and display the record of 5 students.
*/


#include <stdio.h>

// Defining the structure
struct student {
    char name[50];
    int roll;
    float marks;
    char remarks[100];
};

int main() {
    // Array of structures to hold 5 students
    struct student s[5];
    int i;

    // Reading data for 5 students
    for(i = 0; i < 5; i++) {
        printf("\n--- Enter details for Student %d ---\n", i + 1);
        
        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name); // Reads string with spaces

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);

        printf("Enter Remarks: ");
        scanf(" %[^\n]", s[i].remarks);
    }

    // Displaying data of 5 students in a table-like format
    printf("\n%-20s %-10s %-10s %-20s\n", "Name", "Roll", "Marks", "Remarks");
    printf("------------------------------------------------------------\n");

    for(i = 0; i < 5; i++) {
        printf("%-20s %-10d %-10.2f %-20s\n", 
                s[i].name, s[i].roll, s[i].marks, s[i].remarks);
    }

    return 0;
}