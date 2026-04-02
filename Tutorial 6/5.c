/*A file named employee.txt stores employee name, employee id and employee salary.
WAP to display the details of all employees in the order of their salary.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    FILE *fptr;
    struct Employee emp[100]; // Assuming a maximum of 100 employees
    struct Employee temp;
    int count = 0, i, j;

    // 1. Open the file for reading
    fptr = fopen("employee.txt", "r");
    if (fptr == NULL) {
        printf("Error: Could not open employee.txt. Make sure the file exists.\n");
        exit(1);
    }

    // 2. Read data from file into the array of structures
    // fscanf returns the number of items successfully read
    while (fscanf(fptr, "%s %d %f", emp[count].name, &emp[count].id, &emp[count].salary) != EOF) {
        count++;
    }
    fclose(fptr);

    if (count == 0) {
        printf("The file is empty.\n");
        return 0;
    }

    // 3. Sort the array based on salary (Ascending Order)
    for (i = 0; i < count - 1; i++) {
        for (j = 0; j < count - i - 1; j++) {
            if (emp[j].salary > emp[j + 1].salary) {
                // Swap the entire structure
                temp = emp[j];
                emp[j] = emp[j + 1];
                emp[j + 1] = temp;
            }
        }
    }

    // 4. Display the sorted details
    printf("\n--- Employee Details (Sorted by Salary) ---\n");
    printf("%-20s %-10s %-10s\n", "Name", "ID", "Salary");
    printf("-------------------------------------------\n");
    for (i = 0; i < count; i++) {
        printf("%-20s %-10d %-10.2f\n", emp[i].name, emp[i].id, emp[i].salary);
    }

    return 0;
}