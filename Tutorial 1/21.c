
#include <stdio.h>

int main() {
    int num, i, count = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // 1 is neither prime nor composite
    if (num <= 1) {
        printf("%d is neither prime nor composite.\n", num);
        return 0;
    }

    // Loop to count factors
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }

    // Switch based on the number of factors
    switch (count) {
        case 2:
            printf("%d is a Prime number.\n", num);
            break;
        default:
            printf("%d is a Composite number.\n", num);
            break;
    }

    return 0;
}
