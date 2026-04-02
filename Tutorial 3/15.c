/*WAP to input 3*3 matrix and display the largest and smallest element of the entered
matrix.*/

#include <stdio.h>

int main() {
    int matrix[3][3], i, j;
    int max, min;

    printf("Enter elements for a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    max = matrix[0][0];
    min = matrix[0][0];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
            if (matrix[i][j] < min) {
                min = matrix[i][j];
            }
        }
    }

    printf("\nThe entered matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nLargest element: %d\n", max);
    printf("Smallest element: %d\n", min);

    return 0;
}