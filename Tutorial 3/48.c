/*WAP to multiply two 3*3 matrices. Two matrices are input from the main() function and
pass to a user defined function with argument with array. The result is also displayed
from the main function.
*/

#include <stdio.h>

// Function prototype
void multiplyMatrices(int mat1[3][3], int mat2[3][3], int res[3][3]);

int main() {
    int a[3][3], b[3][3], result[3][3];
    int i, j;

    // Input first matrix
    printf("Enter elements of the first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input second matrix
    printf("Enter elements of the second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Multiply matrices using function
    multiplyMatrices(a, b, result);

    // Display the result
    printf("\nResultant Matrix after multiplication:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// User-defined function for matrix multiplication
void multiplyMatrices(int mat1[3][3], int mat2[3][3], int res[3][3]) {
    int i, j, k;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            res[i][j] = 0; // Initialize result cell to zero
            for (k = 0; k < 3; k++) {
                // Row of first matrix * Column of second matrix
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}