/*WAP that calls reversearray() to reverse the array and return the array and display the
elements of reversed array using a pointer.
*/

#include <stdio.h>

// Function prototype: Returns a pointer to an integer
int* reverseArray(int *arr, int n);

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr;

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        // Input using pointer arithmetic
        scanf("%d", (arr + i));
    }

    // Call function and store the returned pointer
    ptr = reverseArray(arr, n);

    printf("\nReversed Array:\n");
    for (i = 0; i < n; i++) {
        // Display using the returned pointer and arithmetic
        printf("%d ", *(ptr + i));
    }

    printf("\n");
    return 0;
}

// Function to reverse the array using pointers
int* reverseArray(int *arr, int n) {
    int *start = arr;           // Pointer to the first element
    int *end = arr + (n - 1);    // Pointer to the last element
    int temp;

    while (start < end) {
        // Swap values at start and end pointers
        temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers toward the middle
        start++;
        end--;
    }

    return arr; // Returning the base address of the modified array
}