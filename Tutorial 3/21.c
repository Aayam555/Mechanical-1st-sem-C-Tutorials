/* A multinational company has hired 3 sales persons for marketing/selling its 3 different
products in Kathmandu. Each salesperson sells each of these products. WAP to read the
number of each product sold by all sales persons. Calculate total sales of each item and
the total sales of each sales person.
*/


#include <stdio.h>

int main() {
    int sales[3][3];
    int i, j;
    int personTotal, productTotal;

    // Reading data
    for (i = 0; i < 3; i++) {
        printf("Enter sales for Salesperson %d (3 products):\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("  Product %d: ", j + 1);
            scanf("%d", &sales[i][j]);
        }
        printf("\n");
    }

    // Displaying Table Header
    printf("\nSales Summary Table:\n");
    printf("Pers.\tProd1\tProd2\tProd3\tTotal\n");
    printf("-------------------------------------\n");

    // Calculating and printing Salesperson totals (Row Sums)
    for (i = 0; i < 3; i++) {
        personTotal = 0;
        printf("S%d\t", i + 1);
        for (j = 0; j < 3; j++) {
            printf("%d\t", sales[i][j]);
            personTotal += sales[i][j];
        }
        printf("%d\n", personTotal);
    }

    // Calculating and printing Product totals (Column Sums)
    printf("-------------------------------------\n");
    printf("Total\t");
    for (j = 0; j < 3; j++) {
        productTotal = 0;
        for (i = 0; i < 3; i++) {
            productTotal += sales[i][j];
        }
        printf("%d\t", productTotal);
    }
    printf("\n");

    return 0;
}