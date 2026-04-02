// WAP that passe an array to a function and print the largest and the smallest elements.
#include <stdio.h>

// Function prototype
void findMinMax(int arr[], int size);

int main() {
    int n, i;
    int numbers[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Passing the array to the function
    findMinMax(numbers, n);

    return 0;
}

// Function to find and print largest and smallest elements
void findMinMax(int arr[], int size) {
    // Initialize both min and max with the first element
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < size; i++) {
        // Check for new largest
        if (arr[i] > max) {
            max = arr[i];
        }
        
        // Check for new smallest
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("\nResults from function:\n");
    printf("Largest element: %d\n", max);
    printf("Smallest element: %d\n", min);
}