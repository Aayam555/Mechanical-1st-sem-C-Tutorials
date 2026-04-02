#include <stdio.h>

int main() {
    int n, reverse = 0, remainder;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Logic to reverse the number
    while (n != 0) {
        remainder = n % 10;          // Get the last digit
        reverse = reverse * 10 + remainder; // Append it to the reverse
        n /= 10;                     // Remove the last digit from n
    }

    printf("Reversed Number: %d\n", reverse);

    return 0;
}
