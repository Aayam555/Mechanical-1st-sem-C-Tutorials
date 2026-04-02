/*WAP to input 3*3 matrix and display the sum of the diagonal matrix.*/
#include <stdio.h>

int main() {
    int matrix[3][3], i, j;
    int diagonalSum = 0;

    printf("Enter elements for a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        diagonalSum += matrix[i][i];
    }

    printf("\nThe entered matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of the diagonal elements: %d\n", diagonalSum);

    return 0;
}