/*Create an array of structure name Employee with name and salary as structure
member and the array of structures is passed to a function which sorts in
ascending order on the basis of salary and display the sorted array from main.
*/

#include <stdio.h>
#include <string.h>

// Defining the structure
struct Employee {
    char name[50];
    float salary;
};

// Function Prototype: Takes array and size as arguments
void sortEmployees(struct Employee emp[], int n);

int main() {
    int n, i;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];

    // Inputting records
    for(i = 0; i < n; i++) {
        printf("\nDetails for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", emp[i].name);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Passing the array to the sorting function
    sortEmployees(emp, n);

    // Displaying the sorted array from main
    printf("\n--- Employees Sorted by Salary (Ascending) ---\n");
    printf("%-20s %-10s\n", "Name", "Salary");
    printf("------------------------------------------\n");

    for(i = 0; i < n; i++) {
        printf("%-20s %-10.2f\n", emp[i].name, emp[i].salary);
    }

    return 0;
}

// Function to sort the array using Bubble Sort
void sortEmployees(struct Employee emp[], int n) {
    int i, j;
    struct Employee temp;

    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            // Compare salaries for Ascending Order
            if(emp[j].salary > emp[j + 1].salary) {
                // Swap the entire structure
                temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }
}