#include <stdio.h>

int main() {
    int num, digit, reversed = 0, temp;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("Zero ");
        return 0;
    }

    // Handle negative numbers
    if (num < 0) {
        printf("Minus ");
        num = -num;
    }

    // Step 1: Reverse the number to process from left to right
    temp = num;
    int original_num = num;
    while (temp > 0) {
        reversed = (reversed * 10) + (temp % 10);
        temp /= 10;
    }

    // Step 2: Use switch to print words
    while (reversed > 0) {
        digit = reversed % 10;

        switch (digit) {
            case 0: printf("Zero "); break;
            case 1: printf("One "); break;
            case 2: printf("Two "); break;
            case 3: printf("Three "); break;
            case 4: printf("Four "); break;
            case 5: printf("Five "); break;
            case 6: printf("Six "); break;
            case 7: printf("Seven "); break;
            case 8: printf("Eight "); break;
            case 9: printf("Nine "); break;
        }
        reversed /= 10;
    }

    // Special Case: Handle trailing zeros (e.g., 100)
    // If original number had more digits than the reversed version
    temp = original_num;
    while (temp % 10 == 0 && temp != 0) {
        printf("Zero ");
        temp /= 10;
    }

    printf("\n");
    return 0;
}
