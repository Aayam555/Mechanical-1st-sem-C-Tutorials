/*WAP to scan n numbers in an array and find the
maximum and minimum number and display it*/

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int numbers[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int max = numbers[0];
    int min = numbers[0];

    for (i = 1; i < n; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
        if (numbers[i] < min) {
            min = numbers[i];
        }
    }

    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);

    return 0;
}

