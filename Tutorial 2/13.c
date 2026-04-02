/*WAP to read a number n from user and calculate sum of first
n natural numbers using recursion*/

#include <stdio.h>

int sumNatural(int n) {
    if (n == 0) {
        return 0; 
    } else {
        return n + sumNatural(n - 1);
    }
}

int main() {
    int n, result;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        result = sumNatural(n);
        printf("The sum of the first %d natural numbers is: %d\n", n, result);
    }

    return 0;
}

