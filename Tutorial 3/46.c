//WAP using a function that returns the largest number from an array of numbers that is
//passed to the function

#include <stdio.h>

// Function prototype
int getLargest(int arr[], int size);

int main() {
    int n, i, largest;
    int numbers[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Call the function and store the returned value
    largest = getLargest(numbers, n);

    printf("\nThe largest number in the array is: %d\n", largest);

    return 0;
}

// Function to find and return the largest element
int getLargest(int arr[], int size) {
    int max = arr[0]; // Start by assuming the first element is the largest

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger value is encountered
        }
    }

    return max; // Return the final largest value to main
}