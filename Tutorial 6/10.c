/* WAP to store employee details in a text file. Read data from the text file, sort them in
ascending order of salary and store the sorted record to a binary file. Display the details
and rank of employees given by the user.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[50];
    int id;
    float salary;
} Employee;

void sortAndStore(int n);

int main() {
    FILE *ftxt;
    int n, i, rank;
    Employee temp;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    // Step 1: Write to Text File
    ftxt = fopen("emp.txt", "w");
    if (!ftxt) { printf("Error!"); exit(1); }

    for (i = 0; i < n; i++) {
        printf("\nEmployee %d Name, ID, Salary: ", i + 1);
        scanf(" %s %d %f", temp.name, &temp.id, &temp.salary);
        fprintf(ftxt, "%s %d %.2f\n", temp.name, temp.id, temp.salary);
    }
    fclose(ftxt);

    // Step 2: Sort and Store in Binary File
    sortAndStore(n);

    // Step 3: Display Rank (Rank 1 = Lowest Salary)
    printf("\nEnter the Rank to display (1 to %d): ", n);
    scanf("%d", &rank);

    if (rank > 0 && rank <= n) {
        FILE *fbin = fopen("sorted_emp.bin", "rb");
        // Jump to the (rank-1)th record
        fseek(fbin, (rank - 1) * sizeof(Employee), SEEK_SET);
        fread(&temp, sizeof(Employee), 1, fbin);
        
        printf("\n--- Details of Rank %d ---\n", rank);
        printf("Name: %s\nID: %d\nSalary: %.2f\n", temp.name, temp.id, temp.salary);
        fclose(fbin);
    } else {
        printf("Invalid Rank!\n");
    }

    return 0;
}

void sortAndStore(int n) {
    FILE *ftxt = fopen("emp.txt", "r");
    FILE *fbin = fopen("sorted_emp.bin", "wb");
    Employee *arr = (Employee *)malloc(n * sizeof(Employee));
    Employee temp;

    // Read from text to array
    for (i = 0; i < n; i++) {
        fscanf(ftxt, "%s %d %f", arr[i].name, &arr[i].id, &arr[i].salary);
    }

    // Bubble Sort by Salary (Ascending)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].salary > arr[j + 1].salary) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Write array to Binary File
    fwrite(arr, sizeof(Employee), n, fbin);

    free(arr);
    fclose(ftxt);
    fclose(fbin);
    printf("\nData sorted and saved to binary file.\n");
}