/*WAP to compute the determinants of a square matrix of nth order and then check
whether the given matrix is singular or not. You need to have two functions as read()
and process().
*/

#include <stdio.h>
#include <math.h>

#define MAX 10

// Function Prototypes
void read(int mat[MAX][MAX], int n);
int process(int mat[MAX][MAX], int n);

int main() {
    int mat[MAX][MAX], n, det;

    printf("Enter the order of the square matrix (n): ");
    scanf("%d", &n);

    read(mat, n);
    det = process(mat, n);

    printf("\nDeterminant of the matrix: %d\n", det);

    if (det == 0) {
        printf("The matrix is SINGULAR (Inverse does not exist).\n");
    } else {
        printf("The matrix is NON-SINGULAR.\n");
    }

    return 0;
}

// Function to read the matrix elements
void read(int mat[MAX][MAX], int n) {
    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
}

// Function to calculate determinant recursively
int process(int mat[MAX][MAX], int n) {
    int det = 0;
    int submat[MAX][MAX];

    // Base Case: 1x1 matrix
    if (n == 1) {
        return mat[0][0];
    }
    // Base Case: 2x2 matrix
    if (n == 2) {
        return (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);
    }

    // Recursive Case: Laplace Expansion
    for (int x = 0; x < n; x++) {
        int subi = 0;
        for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int j = 0; j < n; j++) {
                if (j == x) continue; // Skip the column of the current pivot
                submat[subi][subj] = mat[i][j];
                subj++;
            }
            subi++;
        }
        // Determinant = sum of ((-1)^row+col * element * determinant of minor)
        det = det + (pow(-1, x) * mat[0][x] * process(submat, n - 1));
    }

    return det;
}