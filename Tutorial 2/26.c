/*WAP to calculate the sum of the following series up to 
n terms specified by the user where n is passed to the 
function that calculate the sum. Your program should have 
more than two function:
(2*3/5)+(4*5/7)+(6*7/9)+...*/



#include <stdio.h>

double calculateTerm(int i) {
    double numerator = (2.0 * i) * (2.0 * i + 1);
    double denominator = (2.0 * i + 3);
    return numerator / denominator;
}

double calculateSum(int n, int current) {
    if (current > n) {
        return 0;
    }
    return calculateTerm(current) + calculateSum(n, current + 1);
}

int main() {
    int n;

    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n < 1) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    double totalSum = calculateSum(n, 1);
    printf("The sum of the series up to %d terms is: %.4f\n", n, totalSum);

    return 0;
}

