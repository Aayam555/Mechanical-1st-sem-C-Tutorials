/*WAP to perform addition, subtraction, multiplication and division of complex
numbers. Make separate functions for each operation.
*/

#include <stdio.h>

typedef struct {
    float real;
    float imag;
} Complex;

// Function Prototypes
Complex add(Complex n1, Complex n2);
Complex subtract(Complex n1, Complex n2);
Complex multiply(Complex n1, Complex n2);
Complex divide(Complex n1, Complex n2);

int main() {
    Complex c1, c2, res;

    printf("Enter 1st complex number (real and imag): ");
    scanf("%f %f", &c1.real, &c1.imag);
    printf("Enter 2nd complex number (real and imag): ");
    scanf("%f %f", &c2.real, &c2.imag);

    res = add(c1, c2);
    printf("\nAddition: %.2f + %.2fi", res.real, res.imag);

    res = subtract(c1, c2);
    printf("\nSubtraction: %.2f + %.2fi", res.real, res.imag);

    res = multiply(c1, c2);
    printf("\nMultiplication: %.2f + %.2fi", res.real, res.imag);

    res = divide(c1, c2);
    if (c2.real == 0 && c2.imag == 0)
        printf("\nDivision: Error (Division by zero)");
    else
        printf("\nDivision: %.2f + %.2fi\n", res.real, res.imag);

    return 0;
}

Complex add(Complex n1, Complex n2) {
    Complex t;
    t.real = n1.real + n2.real;
    t.imag = n1.imag + n2.imag;
    return t;
}

Complex subtract(Complex n1, Complex n2) {
    Complex t;
    t.real = n1.real - n2.real;
    t.imag = n1.imag - n2.imag;
    return t;
}

Complex multiply(Complex n1, Complex n2) {
    Complex t;
    t.real = (n1.real * n2.real) - (n1.imag * n2.imag);
    t.imag = (n1.real * n2.imag) + (n1.imag * n2.real);
    return t;
}

Complex divide(Complex n1, Complex n2) {
    Complex t;
    float den = (n2.real * n2.real) + (n2.imag * n2.imag);
    t.real = ((n1.real * n2.real) + (n1.imag * n2.imag)) / den;
    t.imag = ((n1.imag * n2.real) - (n1.real * n2.imag)) / den;
    return t;
}