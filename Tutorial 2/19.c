/*WAP to display the prime numbers entered by the user 
in the range using the concept of recursion*/


#include <stdio.h>

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
    int start, end, i;

    printf("Enter the starting range: ");
    scanf("%d", &start);
    printf("Enter the ending range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are: \n", start, end);

    for (i = start; i <= end; i++) {
        if (i > 1 && isPrime(i, 2)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}