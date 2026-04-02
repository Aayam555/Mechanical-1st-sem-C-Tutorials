/*Write a complete program that adds the corresponding elements of two matrices of the
elements of the elements that are positive, otherwise multiply the corresponding
elements using the concept of passing array to the function and pointer.*/


#include <stdio.h>

// Function Prototype
void processMatrices(int *mat1, int *mat2, int *res, int rows, int cols);

int main() {
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int a[r][c], b[r][c], result[r][c];

    // Input Matrix A
    printf("\nEnter elements of Matrix A:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Input Matrix B
    printf("\nEnter elements of Matrix B:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Passing arrays to function (decaying to pointers)
    processMatrices(&a[0][0], &b[0][0], &result[0][0], r, c);

    // Display Result
    printf("\nResultant Matrix:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// Function using pointer arithmetic to process elements
void processMatrices(int *mat1, int *mat2, int *res, int rows, int cols) {
    int totalElements = rows * cols;
    int i;

    for (i = 0; i < totalElements; i++) {
        // Accessing values using pointer arithmetic *(ptr + offset)
        int val1 = *(mat1 + i);
        int val2 = *(mat2 + i);

        if (val1 > 0 && val2 > 0) {
            // Both positive: Add
            *(res + i) = val1 + val2;
        } else {
            // Otherwise: Multiply
            *(res + i) = val1 * val2;
        }
    }
}