/*WAP to find the factorial of a given number using recursion*/

#include <stdio.h>

long long findFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * findFactorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is %lld\n", num, findFactorial(num));
    }

    return 0;
}