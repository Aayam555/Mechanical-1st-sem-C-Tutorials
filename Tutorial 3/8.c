/*WAP to scan n numbers in an array and display
the second largest number*/

#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Please enter at least 2 numbers.\n");
        return 1;
    }

    int numbers[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (i = 0; i < n; i++) {
        if (numbers[i] > largest) {
            secondLargest = largest;
            largest = numbers[i];
        } else if (numbers[i] > secondLargest && numbers[i] != largest) {
            secondLargest = numbers[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("There is no second largest number (all elements might be the same).\n");
    } else {
        printf("The second largest number is: %d\n", secondLargest);
    }

    return 0;
}

