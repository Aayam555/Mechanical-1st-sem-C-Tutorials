//WAP in C to find the second largest elements from an array containing n elements using
//the concept of pointer.

#include <stdio.h>
#include <limits.h> // For INT_MIN

int main() {
    int n, i;
    int max, secMax;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Array must have at least two elements.\n");
        return 1;
    }

    int arr[n];
    int *ptr = arr; // Pointer pointing to the base address of the array

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        // Using pointer arithmetic to store values
        scanf("%d", (ptr + i));
    }

    // Initialize max and secMax
    max = secMax = INT_MIN;

    for (i = 0; i < n; i++) {
        int currentVal = *(ptr + i); // Dereferencing the pointer

        if (currentVal > max) {
            // Current becomes max, previous max becomes second max
            secMax = max;
            max = currentVal;
        } 
        else if (currentVal > secMax && currentVal != max) {
            // Update second max if current is between max and secMax
            secMax = currentVal;
        }
    }

    if (secMax == INT_MIN) {
        printf("There is no second largest element (all elements might be the same).\n");
    } else {
        printf("\nLargest Element: %d\n", max);
        printf("Second Largest Element: %d\n", secMax);
    }

    return 0;
}

