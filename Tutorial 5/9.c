//WAP to multiply two given matrices if possible using the concept of a pointer.


#include <stdio.h>
#include <stdlib.h>

void multiplyMatrices(int *a, int *b, int *res, int r1, int c1, int r2, int c2);

int main() {
    int r1, c1, r2, c2, i, j;

    printf("Enter rows and columns for Matrix A: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns for Matrix B: ");
    scanf("%d %d", &r2, &c2);

    // Multiplication condition check
    if (c1 != r2) {
        printf("\nError: Matrices cannot be multiplied! (Columns of A != Rows of B)\n");
        return 0;
    }

    int a[r1][c1], b[r2][c2], res[r1][c2];

    // Input Matrix A
    printf("\nEnter elements of Matrix A:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input Matrix B
    printf("\nEnter elements of Matrix B:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Call multiplication function using base addresses
    multiplyMatrices(&a[0][0], &b[0][0], &res[0][0], r1, c1, r2, c2);

    // Display Result
    printf("\nResultant Matrix (A x B):\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d\t", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void multiplyMatrices(int *a, int *b, int *res, int r1, int c1, int r2, int c2) {
    int i, j, k;

    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            // Initialize result element to 0
            *(res + (i * c2 + j)) = 0;

            for (k = 0; k < c1; k++) {
                // Logic: res[i][j] += a[i][k] * b[k][j]
                *(res + (i * c2 + j)) += (*(a + (i * c1 + k))) * (*(b + (k * c2 + j)));
            }
        }
    }
}