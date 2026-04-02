/*WAP in C to read the integers from the user until the user says “no”. After reading data,
write all the odd numbers to a file named odd.txt and all the even numbers to a file
named even.txt.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    FILE *fOdd, *fEven;
    int numbers[100]; // Array to store input numbers
    int count = 0, i;
    char choice[10];

    // 1. Input Loop
    while (count < 100) {
        printf("Enter an integer: ");
        scanf("%d", &numbers[count]);
        count++;

        printf("Do you want to enter another number? (yes/no): ");
        scanf("%s", choice);

        // Check if user entered "no" (case-insensitive check not standard, so we check "no")
        if (strcmp(choice, "no") == 0 || strcmp(choice, "No") == 0) {
            break;
        }
    }

    // 2. Open Files
    fOdd = fopen("odd.txt", "w");
    fEven = fopen("even.txt", "w");

    if (fOdd == NULL || fEven == NULL) {
        printf("Error: Could not open files for writing.\n");
        exit(1);
    }

    // 3. Process and Write to Files
    for (i = 0; i < count; i++) {
        if (numbers[i] % 2 == 0) {
            // Number is even
            fprintf(fEven, "%d\n", numbers[i]);
        } else {
            // Number is odd
            fprintf(fOdd, "%d\n", numbers[i]);
        }
    }

    // 4. Close Files
    fclose(fOdd);
    fclose(fEven);

    printf("\nData successfully sorted into 'odd.txt' and 'even.txt'.\n");

    return 0;
}