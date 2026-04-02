/* WAP to read n integer numbers in an array and create two functions to sort in ascending
order and descending order and display the result in the main function.*/

#include <stdio.h>

// Function prototypes
void sortAscending(int arr[], int n);
void sortDescending(int arr[], int n);
void displayArray(int arr[], int n);

int main() {
    int n, i, choice;
    int numbers[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Sorting in Ascending Order
    sortAscending(numbers, n);
    printf("\nArray in Ascending Order: ");
    displayArray(numbers, n);

    // Sorting in Descending Order 
    // (Note: This will sort the already ascending array into descending)
    sortDescending(numbers, n);
    printf("Array in Descending Order: ");
    displayArray(numbers, n);

    return 0;
}

// Function to sort in Ascending Order (Smallest to Largest)
void sortAscending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) { // Swap if left is greater than right
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to sort in Descending Order (Largest to Smallest)
void sortDescending(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) { // Swap if left is smaller than right
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Helper function to print the array
void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
