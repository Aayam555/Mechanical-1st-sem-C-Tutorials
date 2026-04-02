#include <stdio.h>

int main() {
    int num, i;

    printf("Enter a number to find its multiplication table: ");
    scanf("%d", &num);

    // --- Method 1: Using a FOR loop ---
    printf("\nMultiplication Table (Using for loop):\n");
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    // --- Method 2: Using a WHILE loop ---
    printf("\nMultiplication Table (Using while loop):\n");
    i = 1; // Resetting the counter
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++; // Incrementing is manual here
    }

    return 0;
}
