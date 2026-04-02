//WAP to pass array to function and sort them in ascending order.


#include <stdio.h>

// Function prototype
void sortArray(int arr[], int n);

int main() {
    int n, i;
    int numbers[100];

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Pass the array and its size to the function
    sortArray(numbers, n);

    printf("\nArray sorted in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

// Function to perform Bubble Sort
void sortArray(int arr[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            // Swap if the current element is greater than the next
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}