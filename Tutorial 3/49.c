/* WAP to take a list of values from the user into an array. Pass to a function which sorts
the values in ascending order. Display the sorted list from the main.
*/


#include <stdio.h>

// Function prototype: Takes the array and its size as arguments
void sortAscending(int arr[], int n);

int main() {
    int n, i;
    int numbers[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Taking list of values from the user
    printf("Enter %d values:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Passing array to the function
    sortAscending(numbers, n);

    // Displaying the sorted list from main
    printf("\nThe sorted list in ascending order is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

// Function definition to sort the array
void sortAscending(int arr[], int n) {
    int i, j, temp;

    // Outer loop for number of passes
    for (i = 0; i < n - 1; i++) {
        // Inner loop for comparing adjacent elements
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swapping elements if they are in the wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}