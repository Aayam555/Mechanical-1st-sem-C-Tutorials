/*Create a structure named class that has section and standard as its members.
Include this structure as a member in another structure named student which has
name, roll, marks as other members. WAP to read and display the information of
5 students.*/

#include <stdio.h>

// Defining the inner structure
struct class_info {
    char section;
    int standard; // Equivalent to 'Grade'
};

// Defining the outer structure
struct student {
    char name[50];
    int roll;
    float marks;
    struct class_info cl; // Nested structure member
};

int main() {
    struct student s[5];
    int i;

    // Reading data for 5 students
    for(i = 0; i < 5; i++) {
        printf("\n--- Enter details for Student %d ---\n", i + 1);
        
        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Enter Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);

        printf("Enter Standard (Grade): ");
        scanf("%d", &s[i].cl.standard);

        printf("Enter Section (e.g., A, B): ");
        scanf(" %c", &s[i].cl.section);
    }

    // Displaying the information
    printf("\n%-15s %-8s %-8s %-10s %-8s\n", "Name", "Roll", "Marks", "Standard", "Section");
    printf("------------------------------------------------------------\n");

    for(i = 0; i < 5; i++) {
        printf("%-15s %-8d %-8.2f %-10d %-8c\n", 
                s[i].name, 
                s[i].roll, 
                s[i].marks, 
                s[i].cl.standard, 
                s[i].cl.section);
    }

    return 0;
