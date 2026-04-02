/*WAP to read a m*n matrix of integers and to find the largest element of each row. Store
the largest elements of the row in a one dimensional array of m integers before
displaying them.
*/


#include <stdio.h>

int main() {
    int m, n, i, j;

    printf("Enter the number of rows (m): ");
    scanf("%d", &m);
    printf("Enter the number of columns (n): ");
    scanf("%d", &n);

    int matrix[m][n];
    int largestInRow[m]; // 1D array to store the max of each row

    printf("\nEnter elements of the %d x %d matrix:\n", m, n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Finding the largest element in each row
    for (i = 0; i < m; i++) {
        int max = matrix[i][0]; // Assume first element of row is largest
        for (j = 1; j < n; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
        largestInRow[i] = max; // Store in the 1D array
    }

    // Displaying the results
    printf("\nRow-wise largest elements are:\n");
    for (i = 0; i < m; i++) {
        printf("Largest in Row %d: %d\n", i + 1, largestInRow[i]);
    }

    return 0;
}