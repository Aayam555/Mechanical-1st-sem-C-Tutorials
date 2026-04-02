/*WAP that reads several different names and address using structure computer,
rearrange the names into alphabetical order and write out alphabetical list.
*/

#include <stdio.h>
#include <string.h>

// Defining the structure
struct computer {
    char name[50];
    char address[100];
};

int main() {
    int n, i, j;

    printf("Enter the number of records: ");
    scanf("%d", &n);

    struct computer c[n], temp;

    // Reading names and addresses
    for(i = 0; i < n; i++) {
        printf("\nEntry %d:\n", i + 1);
        printf("Enter Name: ");
        scanf(" %[^\n]", c[i].name);
        printf("Enter Address: ");
        scanf(" %[^\n]", c[i].address);
    }

    // Sorting Logic (Bubble Sort)
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) {
            // Compare names alphabetically
            if(strcmp(c[j].name, c[j + 1].name) > 0) {
                // Swap the entire structure variable
                temp = c[j];
                c[j] = c[j + 1];
                c[j + 1] = temp;
            }
        }
    }

    // Displaying the sorted list
    printf("\n--- Alphabetical List of Names and Addresses ---\n");
    printf("%-20s %-30s\n", "Name", "Address");
    printf("--------------------------------------------------\n");

    for(i = 0; i < n; i++) {
        printf("%-20s %-30s\n", c[i].name, c[i].address);
    }

    return 0;
}