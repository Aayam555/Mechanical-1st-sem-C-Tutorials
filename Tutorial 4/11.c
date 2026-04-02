/*Create a structure to hold any complex number x+iy. WAP to read two complex
numbers and display a third complex number which is the multiplication of the
entered complex numbers*/

#include <stdio.h>

// Defining the structure for a complex number
struct Complex {
    float real;
    float imag;
};

int main() {
    struct Complex n1, n2, result;

    // Reading the first complex number
    printf("Enter real and imaginary part of 1st complex number:\n");
    printf("Real: ");
    scanf("%f", &n1.real);
    printf("Imaginary: ");
    scanf("%f", &n1.imag);

    // Reading the second complex number
    printf("\nEnter real and imaginary part of 2nd complex number:\n");
    printf("Real: ");
    scanf("%f", &n2.real);
    printf("Imaginary: ");
    scanf("%f", &n2.imag);

    // Multiplication Logic
    // Real = (a*c - b*d)
    result.real = (n1.real * n2.real) - (n1.imag * n2.imag);
    
    // Imaginary = (a*d + b*c)
    result.imag = (n1.real * n2.imag) + (n1.imag * n2.real);

    // Displaying the result
    printf("\nResult of Multiplication: %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}
