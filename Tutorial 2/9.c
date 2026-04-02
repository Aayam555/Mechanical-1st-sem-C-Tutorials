/*WAP to print Fibonacci Series using Function (without using 
recursive function)*/

#include <stdio.h>

int printFibonacci(int n) {
    int a = 0, b = 1, c;
    for (int i = 1; i <= n; ++i) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}

int main() {
    int t;
    printf("Enter the number of terms: ");
    scanf("%d", &t);
    if (t <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printFibonacci(t);
    }
    return 0;
}