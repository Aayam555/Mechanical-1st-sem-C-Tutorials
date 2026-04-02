/*WAP to read the name, roll and marks of five students using an array of
structure. Display the name and the roll no of those students whose marks is
greater than or equal to 80.
*/

#include <stdio.h>

// Define the structure
struct student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct student s[5];
    int i;

    // Reading data for 5 students
    for(i = 0; i < 5; i++) {
        printf("\n--- Student %d ---\n", i + 1);
        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    // Logic to display students with marks >= 80
    printf("\n--- Students with Marks >= 80 ---\n");
    printf("%-20s %-10s\n", "Name", "Roll No");
    printf("-------------------------------\n");

    int found = 0;
    for(i = 0; i < 5; i++) {
        if(s[i].marks >= 80) {
            printf("%-20s %-10d\n", s[i].name, s[i].roll);
            found = 1;
        }
    }

    if(!found) {
        printf("No students found with marks 80 or above.\n");
    }

    return 0;
