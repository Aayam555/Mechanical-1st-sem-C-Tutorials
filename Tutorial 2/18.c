/*WAP ro read a number and check wehther the given number is
prime or composite using recursion*/

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
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 1) {
        printf("Please enter a number greater than 0.\n");
    } else if (num == 1) {
        printf("1 is neither prime nor composite.\n");
    } else {
        if (isPrime(num, 2)) {
            printf("%d is a Prime number.\n", num);
        } else {
            printf("%d is a Composite number.\n", num);
        }
    }

    return 0;
}


