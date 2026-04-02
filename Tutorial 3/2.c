/*WAP to calculate the sum and the average
of n integer numbers entered by the user using 
the concept of array*/

#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n]; // Declaring an array of size n

    // Reading n integers from the user
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i]; // Adding the number to sum as we read it
    }

    // Calculating the average
    average = sum / n;

    // Displaying the results
    printf("\nSum = %.2f", sum);
    printf("\nAverage = %.2f\n", average);

    return 0;
}