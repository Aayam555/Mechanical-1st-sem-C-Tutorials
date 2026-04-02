/*Create a structure named student having name, roll, marks and remarks as
members. Assume appropriate types and size of members. WAP using structure
to read and display the data of a student entered by the user.
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
    // Creating a structure variable
    struct student s;

    printf("--- Enter Student Details ---\n");

    // Reading the Name (using %[^\n] to read strings with spaces)
    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);

    // Reading Remarks
    printf("Enter Remarks: ");
    scanf(" %[^\n]", s.remarks);

    // Displaying the data
    printf("\n--- Student Information ---\n");
    printf("Name:    %s\n", s.name);
    printf("Roll No: %d\n", s.roll);
    printf("Marks:   %.2f\n", s.marks);
    printf("Remarks: %s\n", s.remarks);

    return 0;
}