#include <stdio.h>

int main() {
    int n, reversed = 0, remainder;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Loop continues until the number becomes 0
    while (n != 0) {
        remainder = n % 10;            // 1. Get the last digit
        reversed = reversed * 10 + remainder; // 2. Build the reversed number
        n /= 10;                       // 3. Remove the last digit from n
    }

    printf("Reversed Number: %d\n", reversed);

    return 0;
}
