/*WAP to display the reverse of a number using Recursion*/


#include <stdio.h>
#include <math.h>

int reverse(int n) {
    if (n == 0) {
        return 0;
    }
    
    int digits = (int)log10(n);
    
    return (n % 10) * pow(10, digits) + reverse(n / 10);
}

int main() {
    int num, result;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num == 0) {
        result = 0;
    } else if (num < 0) {
        printf("-");
        result = reverse(-num);
    } else {
        result = reverse(num);
    }

    printf("Reversed number: %d\n", result);

    return 0;
}
