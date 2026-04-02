/*WAP to input two 3*3 matrix from the user and display the difference of matrix.
*/

#include <stdio.h>

int main() {
    int a[3][3], b[3][3], diff[3][3], i, j;

    printf("Enter elements for the first 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements for the second 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            diff[i][j] = a[i][j] - b[i][j];
        }
    }

    printf("\nDifference of the two matrices (A - B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", diff[i][j]);
        }
        printf("\n");
    }

    return 0;
}