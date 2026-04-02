/*WAP to calculate the sum of series given below
using recursive function
1+11+111+1111+...+ up to N terms.*/


#include <stdio.h>

long long calculateSum(int n, long long current_term) {
    if (n == 0) {
        return 0;
    }
    return current_term + calculateSum(n - 1, (current_term * 10) + 1);
}

int main() {
    int n;
    printf("Enter the number of terms (N): ");
    if (scanf("%d", &n) != 1 || n < 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    long long total_sum = calculateSum(n, 1);

    printf("The sum of the series up to %d terms is: %lld\n", n, total_sum);

    return 0;
}

