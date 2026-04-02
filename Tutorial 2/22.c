/*WAP to check whether a given number 
is palindrome or not using the concept of recursive
function*/


#include <stdio.h>
#include <math.h>

int reverse(int n, int len) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) * pow(10, len - 1) + reverse(n / 10, len - 1);
}

int main() {
    int num, rev, digits;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("%d is not a palindrome.\n", num);
        return 0;
    }

    if (num == 0) {
        digits = 1;
    } else {
        digits = (int)log10(num) + 1;
    }

    rev = reverse(num, digits);

    if (num == rev) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

    return 0;
}


