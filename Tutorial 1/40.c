
#include <stdio.h>

int main() {
    int num, originalNum, remainder, sum = 0;
    long fact;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Loop through each digit of the number
    while (num > 0) {
        remainder = num % 10;

        // Calculate factorial of the digit
        fact = 1;
        for (int i = 1; i <= remainder; i++) {
            fact *= i;
        }

        sum += fact;
        num /= 10;
    }

    // Check if the sum of factorials matches the original number
    if (sum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is not a Strong Number.\n", originalNum);
    }

    return 0;
}
