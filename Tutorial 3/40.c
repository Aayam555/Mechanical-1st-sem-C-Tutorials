//WAP to find the largest number among n numbers entered by the user by passing an array to the function.

#include <stdio.h>

// Function prototype
int findLargest(int arr[], int n);

int main() {
    int n, i, max;
    int numbers[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Passing the array to the function
    max = findLargest(numbers, n);

    printf("\nThe largest number is: %d\n", max);

    return 0;
}

// Function definition
int findLargest(int arr[], int n) {
    int max = arr[0]; // Assume the first element is the largest

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger value is found
        }
    }

    return max;
}