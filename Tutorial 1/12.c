/*WAP to find all the roots of a quadratic equation*/
#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,D;
    float x1,x2;
    printf("Enter values of a b and c: ");
    scanf("%d %d %d", &a, &b, &c);
    D = b*b-4*a*c;
    if(D > 0){
        x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
        x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
        printf("Roots: %.2f and %.2f\n", x1, x2);
    }
    else{
        float imaginary = b*b-4*a*c;
        printf("%f", imaginary);
        printf("Roots: %.2f+isqrt(%.2f)/(%.2f) and %.2f-isqrt(%.2f)/(%.2f)", -b/(2*a), -imaginary, 2*a, -b/(2*a), -imaginary, 2*a);
    }
    return 0;
}
