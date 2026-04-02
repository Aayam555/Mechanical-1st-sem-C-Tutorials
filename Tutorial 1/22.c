#include <stdio.h>
#include <math.h>

int main() {
    int choice, num, i, sum, temp, remainder, digits;

    do {
        printf("\n--- Multi-Task Menu ---");
        printf("\n1. Check Prime Number");
        printf("\n2. Check Even Number");
        printf("\n3. Check Armstrong Number");
        printf("\n4. Check Palindrome Number");
        printf("\n5. Check Perfect Number");
        printf("\n6. Exit");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice >= 1 && choice <= 5) {
            printf("Enter a number: ");
            scanf("%d", &num);
        }

        switch (choice) {
            case 1: // Prime Number
                temp = 0;
                for (i = 2; i <= num / 2; i++) {
                    if (num % i == 0) { temp = 1; break; }
                }
                if (num > 1 && temp == 0) printf("%d is Prime.\n", num);
                else printf("%d is not Prime.\n", num);
                break;

            case 2: // Even Number
                if (num % 2 == 0) printf("%d is Even.\n", num);
                else printf("%d is Odd.\n", num);
                break;

            case 3: // Armstrong Number (e.g., 153 = 1^3 + 5^3 + 3^3)
                temp = num; sum = 0; digits = 0;
                int val = num;
                while (val != 0) { val /= 10; digits++; }
                val = num;
                while (val != 0) {
                    remainder = val % 10;
                    sum += pow(remainder, digits);
                    val /= 10;
                }
                if (sum == num) printf("%d is an Armstrong number.\n", num);
                else printf("%d is not an Armstrong number.\n", num);
                break;

            case 4: // Palindrome Number (e.g., 121)
                temp = num; sum = 0;
                while (temp != 0) {
                    remainder = temp % 10;
                    sum = sum * 10 + remainder;
                    temp /= 10;
                }
                if (sum == num) printf("%d is a Palindrome.\n", num);
                else printf("%d is not a Palindrome.\n", num);
                break;

            case 5: // Perfect Number (e.g., 6 = 1+2+3)
                sum = 0;
                for (i = 1; i < num; i++) {
                    if (num % i == 0) sum += i;
                }
                if (sum == num) printf("%d is a Perfect number.\n", num);
                else printf("%d is not a Perfect number.\n", num);
                break;

            case 6:
                printf("Exiting program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}
