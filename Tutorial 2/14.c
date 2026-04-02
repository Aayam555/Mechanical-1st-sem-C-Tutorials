/*WAP to generate particular term in Fibonacci Series 
using Recursion*/

#include <stdio.h>

int findFibonacciTerm(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n == 1) {
        return 1;
    }
    else {
        return findFibonacciTerm(n - 1) + findFibonacciTerm(n - 2);
    }
}

int main() {
    int n, result;

    printf("Enter the term position (n) you want to find: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        result = findFibonacciTerm(n);
        printf("The Fibonacci term at position %d is: %d\n", n, result);
    }

    return 0;
}

