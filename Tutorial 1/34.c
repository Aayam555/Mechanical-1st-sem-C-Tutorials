#include <stdio.h>

int main() {
    int i, j;

    printf("--- Multiplication Tables from 5 to 10 ---\n");

    // Outer loop: Determines which number's table we are printing
    for (i = 5; i <= 10; i++) {
        printf("\nMultiplication Table of %d:\n", i);
        printf("---------------------------\n");

        // Inner loop: Multiplies the current number (i) by 1 through 10
        for (j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
    }

    return 0;
}
