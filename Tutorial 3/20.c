/*WAP to read square matrix of order N*N and find the sum of both the diagonals*/

#include <stdio.h>

int main() {
    int n, i, j;
    int primarySum = 0, secondarySum = 0;

    printf("Enter the order of the square matrix (N): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the %d x %d matrix:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Logic to calculate sums
    for (i = 0; i < n; i++) {
        primarySum += matrix[i][i];               // Main Diagonal
        secondarySum += matrix[i][n - 1 - i];     // Secondary Diagonal
    }

    printf("\nThe Matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of Primary Diagonal: %d", primarySum);
    printf("\nSum of Secondary Diagonal: %d\n", secondarySum);

    return 0;
}