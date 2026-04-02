/* WAP that first appends the customer records in a binary file and displays the number of
customer records as well as the contents from the file. The file name should be given by
the user and display a message if it doesn’t exist.*/

#include <stdio.h>
#include <stdlib.h>

struct Customer {
    char name[50];
    int id;
    float balance;
};

int main() {
    FILE *fptr;
    struct Customer c;
    char fileName[50], choice;
    int count = 0;

    printf("Enter the binary file name to open (e.g., cust.dat): ");
    scanf("%s", fileName);

    // Opening in "ab+" mode: 
    // 1. Appends to the end.
    // 2. Allows reading.
    // 3. Creates the file if it doesn't exist.
    fptr = fopen(fileName, "ab+");

    if (fptr == NULL) {
        printf("Error: The file '%s' could not be opened or created.\n", fileName);
        exit(1);
    }

    // --- PHASE 1: APPENDING RECORDS ---
    do {
        printf("\nEnter Customer Name: ");
        scanf(" %[^\n]", c.name);
        printf("Enter Customer ID: ");
        scanf("%d", &c.id);
        printf("Enter Balance: ");
        scanf("%f", &c.balance);

        fwrite(&c, sizeof(struct Customer), 1, fptr);

        printf("Add another record? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    // --- PHASE 2: COUNTING AND DISPLAYING ---
    // Rewind the pointer to the start of the file to read everything
    rewind(fptr);

    printf("\n--- All Customer Records ---\n");
    printf("%-20s %-10s %-10s\n", "Name", "ID", "Balance");
    printf("------------------------------------------\n");

    while (fread(&c, sizeof(struct Customer), 1, fptr) == 1) {
        printf("%-20s %-10d %-10.2f\n", c.name, c.id, c.balance);
        count++; // Increment count for each record found
    }

    printf("------------------------------------------\n");
    printf("Total number of records: %d\n", count);

    fclose(fptr);
    return 0;
}


