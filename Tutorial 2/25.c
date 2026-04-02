/*WAP using recursion to compute the sum of the following series:\
1^2 - 2^2 + 3^2 - ... + (-1)^(n+1)n^2*/

#include <stdio.h>

long long calculateSeries(int n) {
    if (n <= 0) {
        return 0;
    }

    long long currentTerm = (long long)n * n;

    if (n % 2 == 0) {
        return calculateSeries(n - 1) - currentTerm;
    } else {
        return calculateSeries(n - 1) + currentTerm;
    }
}

int main() {
    int n;

    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    long long result = calculateSeries(n);
    printf("Result: %lld\n", result);

    return 0;
}

