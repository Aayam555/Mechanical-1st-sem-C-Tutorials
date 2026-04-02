#include <stdio.h>

int main() {
    float num, sum = 0, average;
    int count = 0;

    printf("Enter positive numbers (Enter 0 or a negative number to stop):\n");

    while (1) {
        printf("Enter a number: ");
        scanf("%f", &num);

        // Check if the number is zero or negative
        if (num <= 0) {
            break; // Exit the loop immediately
        }

        sum += num;   // Add to total sum
        count++;      // Increment the counter
    }

    // Check if any valid numbers were entered to avoid division by zero
    if (count > 0) {
        average = sum / count;
        printf("\n--- Results ---");
        printf("\nTotal Sum: %.2f", sum);
        printf("\nAverage:   %.2f\n", average);
    } else {
        printf("\nNo positive numbers were entered.\n");
    }

    return 0;
}
