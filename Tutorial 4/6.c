/*WAP in C to input the name, roll, marks and address of n students from the user
using structure and display the entered information of students in the order of
their marks*/

#include <stdio.h>

struct student {
    char name[50];
    int roll;
    float marks;
    char address[100];
};

int main() {
    int n, i, j;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student s[n], temp;

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

    // Sorting Logic (Bubble Sort - Descending Order)
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            // Change '>' to '<' for Ascending Order
            if(s[j].marks < s[j + 1].marks) {
                // Swap the entire structure
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    // Displaying the sorted records
    printf("\n--- Students Sorted by Marks (Highest First) ---\n");
    printf("%-20s %-10s %-10s %-20s\n", "Name", "Roll No", "Marks", "Address");
    printf("------------------------------------------------------------\n");

    for(i = 0; i < n; i++) {
        printf("%-20s %-10d %-10.2f %-20s\n", 
                s[i].name, s[i].roll, s[i].marks, s[i].address);
    }

    return 0;
