#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;

    printf("Enter number: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++) {
        // Print the fraction
        printf("%d/%d", (i - 1), i);

        // Add a plus sign between terms, but not after the last one
        if (i < n) {
            printf(" + ");
        }

        // Calculate sum: (float) cast is necessary to avoid getting 0
        sum += (float)(i - 1) / i;
    }

    printf("\nTotal Sum: %.2f\n", sum);

    return 0;
}
