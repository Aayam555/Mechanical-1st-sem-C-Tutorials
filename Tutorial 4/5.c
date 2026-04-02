/*WAP in C to input the name, roll, marks and address of n students from the user
using structure and display only that record whose roll number is searched by the
user.*/

#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
    char address[100];
};

int main() {
    int n, i, searchRoll, found = 0;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Declaring an array of structure for n students
    struct student s[n];

    // Inputting records
    for(i = 0; i < n; i++) {
        printf("\n--- Details for Student %d ---\n", i + 1);
        printf("Enter Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll);
        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
        printf("Enter Address: ");
        scanf(" %[^\n]", s[i].address);
    }

    // Searching logic
    printf("\nEnter the Roll Number to search: ");
    scanf("%d", &searchRoll);

    for(i = 0; i < n; i++) {
        if(s[i].roll == searchRoll) {
            printf("\nRecord Found:\n");
            printf("Name:    %s\n", s[i].name);
            printf("Roll No: %d\n", s[i].roll);
            printf("Marks:   %.2f\n", s[i].marks);
            printf("Address: %s\n", s[i].address);
            found = 1;
            break; // Exit loop once record is found
        }
    }

    if(!found) {
        printf("\nRecord with Roll Number %d not found.\n", searchRoll);
    }

    return 0;
}