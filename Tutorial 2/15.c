/*WAP that will evaluate a floating point number
to be raised to an integer power using Recursion (ie y=m^n)*/


#include <stdio.h>

double power(float m, int n) {
    if (n == 0) {
        return 1;
    }
    if (n < 0) {
        return 1 / power(m, -n);
    }
    return m * power(m, n - 1);
}

int main() {
    float base;
    int exp;
    double result;

    printf("Enter base (floating point): ");
    scanf("%f", &base);
    printf("Enter exponent (integer): ");
    scanf("%d", &exp);

    result = power(base, exp);

    printf("%.2f raised to the power %d is %.4lf\n", base, exp, result);

    return 0;
}


