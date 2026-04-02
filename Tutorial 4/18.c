/*WAP to input name, post and salary of 10 employees from main() function and
pass to a user defined function(argument of this function should also be a
structure type).*/

#include <stdio.h>

// Defining the structure
struct Employee {
    char name[50];
    char post[50];
    float salary;
};

// Function prototype: The argument is of type 'struct Employee'
void displayEmployee(struct Employee e);

int main() {
    struct Employee emp[10];
    int i;

    printf("--- Enter Details for 10 Employees ---\n");

    // Inputting data in main()
    for(i = 0; i < 10; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Enter Name: ");
        scanf(" %[^\n]", emp[i].name);
        printf("Enter Post: ");
        scanf(" %[^\n]", emp[i].post);
        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Displaying data by passing each structure to the function
    printf("\n%-20s %-15s %-10s\n", "Name", "Post", "Salary");
    printf("--------------------------------------------------\n");

    for(i = 0; i < 10; i++) {
        // Passing the structure variable as an argument
        displayEmployee(emp[i]);
    }

    return 0;
}

// User-defined function to display employee details
// 'e' is a copy of the structure passed from main
void displayEmployee(struct Employee e) {
    printf("%-20s %-15s %-10.2f\n", e.name, e.post, e.salary);
}