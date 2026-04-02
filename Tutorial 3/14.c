//WAP to input 3*3 matrix and display the sum of odd elements of 2D array.


#include <stdio.h>

int main() {
    int matrix[3][3], i, j;
    int oddSum = 0;

    printf("Enter elements for a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matrix[i][j] % 2 != 0) {
                oddSum += matrix[i][j];
            }
        }
    }

    printf("\nThe matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nSum of all odd elements: %d\n", oddSum);

    return 0;
}