/*WAP to input name, roll, and marks in 5 subjects of a student. Using the concept
of array within structure to store marks of five students. Finally display the
information of each student with percentage*/

#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks[5]; // Array within structure for 5 subjects
    float percentage;
};

int main() {
    struct student s[5]; // Array of 5 students
    int i, j;
    float total;

    // Inputting data for 5 students
    for(i = 0; i < 5; i++) {
        total = 0;
        printf("\n--- Entering details for Student %d ---\n", i + 1);
        
        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);
        
        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Enter marks for 5 subjects:\n");
        for(j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            total += s[i].marks[j]; // Adding marks to calculate total
        }
        
        // Calculating percentage (Total / 5 subjects)
        s[i].percentage = total / 5.0;
    }

    // Displaying the information
    printf("\n%-20s %-10s %-15s\n", "Name", "Roll No", "Percentage");
    printf("-----------------------------------------------\n");

    for(i = 0; i < 5; i++) {
        printf("%-20s %-10d %-15.2f%%\n", 
                s[i].name, s[i].roll, s[i].percentage);
    }

    return 0;
}

