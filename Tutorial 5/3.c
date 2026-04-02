/*WAP to read a 3*3 square matrix, find minimum integer value of a matrix, replace the
diagonal elements by the minimum element and display it using a pointer.
*/

#include <stdio.h>

int main() {
    int mat[3][3];
    int *ptr = &mat[0][0]; // Pointer to the first element
    int i, j, min;

    // 1. Input the matrix
    printf("Enter elements for a 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", (ptr + (i * 3 + j)));
        }
    }

    // 2. Find the minimum integer value
    min = *ptr; // Assume first element is minimum
    for (i = 0; i < 9; i++) {
        if (*(ptr + i) < min) {
            min = *(ptr + i);
        }
    }
    printf("\nMinimum element in the matrix: %d\n", min);

    // 3. Replace diagonal elements with the minimum value
    // Diagonals are where row index == column index (0,0), (1,1), (2,2)
    for (i = 0; i < 3; i++) {
        *(ptr + (i * 3 + i)) = min;
    }

    // 4. Display the modified matrix using pointer
    printf("\nModified Matrix (Diagonals replaced by %d):\n", min);
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", *(ptr + (i * 3 + j)));
        }
        printf("\n");
    }

    return 0;
}