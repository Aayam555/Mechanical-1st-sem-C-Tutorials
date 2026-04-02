/*WAP to check whether a number is armstrong 
or not using the concept of recursive function*/


#include <stdio.h>
#include <math.h>

int countDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + countDigits(n / 10);
}

int getArmstrongSum(int n, int power) {
    if (n == 0) {
        return 0;
    }
    return pow(n % 10, power) + getArmstrongSum(n / 10, power);
}

int main() {
    int num, sum, digits;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    if (num == 0) {
        digits = 1;
    } else {
        digits = countDigits(num);
    }

    sum = getArmstrongSum(num, digits);

    if (sum == num) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}