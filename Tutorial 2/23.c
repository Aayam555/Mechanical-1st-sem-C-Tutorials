/*WAP to find out whether the nth term of the Fibonacci
series is a prime or not. Read the value of n from 
the user and display the result in the main function.
User separate user defined functions to generate the
nth fibonacci term and the check whether a number is prime or not*/



#include <stdio.h>

int findFibonacci(int n) {
    if (n == 0) {
        return 0;
    } 
    else if (n == 1) {
        return 1;
    } 
    else {
        return findFibonacci(n - 1) + findFibonacci(n - 2);
    }
}

int isPrime(int n, int i) {
    if (n <= 2) {
        return (n == 2) ? 1 : 0;
    }
    if (n % i == 0) {
        return 0;
    }
    if (i * i > n) {
        return 1;
    }
    return isPrime(n, i + 1);
}

int main() {
    int n, fibTerm;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Invalid input. Please enter a non-negative integer.\n");
    } else {
        fibTerm = findFibonacci(n);
        printf("The %dth Fibonacci term is: %d\n", n, fibTerm);

        if (isPrime(fibTerm, 2)) {
            printf("%d is a Prime number.\n", fibTerm);
        } else {
            printf("%d is not a Prime number.\n", fibTerm);
        }
    }

    return 0;
}