#include <stdio.h>

int main() {
    float num1, num2, sum;
    char choice;

    do {
        // 1. Read two numbers
        printf("\nEnter first number: ");
        scanf("%f", &num1);
        printf("Enter second number: ");
        scanf("%f", &num2);

        // 2. Calculate and display sum
        sum = num1 + num2;
        printf("The sum is: %.2f\n", sum);

        // 3. Ask if the user wants to continue
        printf("Do you want to add more numbers? (y/n): ");
        scanf(" %c", &choice); // The space before %c is crucial to skip the Enter key from before

    } while (choice == 'y' || choice == 'Y');

    printf("Program exited. Have a great day!\n");

    return 0;
}
