/*WAP to find the trace and norm of a matrix.
Trace is defined as the sum of principal diagonal elements; Norm is defined as the
square root of the sum of the squares of all the elements in the matrix.*/

#include <stdio.h>
#include <math.h> // Required for sqrt()

int main() {
    int rows, cols, i, j;
    float matrix[10][10];
    float trace = 0, sumSquares = 0, norm;

    printf("Enter the number of rows and columns (e.g., 3 3): ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%f", &matrix[i][j]);
        }
    }

    // Calculation Logic
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            // 1. Calculate sum of squares for Norm
            sumSquares += matrix[i][j] * matrix[i][j];

            // 2. Calculate Trace (only if it's a square matrix and i == j)
            if (i == j) {
                trace += matrix[i][j];
            }
        }
    }

    norm = sqrt(sumSquares);

    printf("\n--- Results ---\n");
    if (rows == cols) {
        printf("Trace of the matrix: %.2f\n", trace);
    } else {
        printf("Trace: Not defined (Matrix must be square)\n");
    }
    printf("Norm of the matrix: %.2f\n", norm);

    return 0;
}

