/*Create a structure named student that has name, roll and marks as members.
Assume appropriate data types and size of members. Use this structure to read
and display the records of 10 students. Create two functions: one to read
information of students and another to display the information.
*/

#include <stdio.h>

// Defining the structure
struct student {
    char name[50];
    int roll;
    float marks;
};

// Function prototypes
void readData(struct student s[], int n);
void displayData(struct student s[], int n);

int main() {
    struct student s[10]; // Array for 10 students

    // Calling the function to read data
    readData(s, 10);

    // Calling the function to display data
    displayData(s, 10);

    return 0;
}

// Function to read information of students
void readData(struct student s[], int n) {
    int i;
    printf("--- Enter Details for %d Students ---\n", n);
    for(i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}

// Function to display information of students
void displayData(struct student s[], int n) {
    int i;
    printf("\n%-20s %-10s %-10s\n", "Name", "Roll No", "Marks");
    printf("------------------------------------------\n");
    for(i = 0; i < n; i++) {
        printf("%-20s %-10d %-10.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
}
