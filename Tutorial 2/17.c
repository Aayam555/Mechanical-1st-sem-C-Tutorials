/*WAP to find the sum of digits of a given number using 
recursive function*/

#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) {
        return 0;
    }
    
    if (n < 0) {
        n = -n;
    }

    return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int number, result;

    printf("Enter an integer: ");
    scanf("%d", &number);

    result = sumOfDigits(number);

    printf("Sum of digits of %d is %d\n", number, result);

    return 0;
}

