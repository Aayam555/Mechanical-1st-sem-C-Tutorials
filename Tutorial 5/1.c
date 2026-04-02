//WAP to input 10 numbers from the user and display the entered numbers using the
//concept of pointer arithmetic.

#include <stdio.h>

int main() {
    int numbers[10];
    int *ptr;
    int i;

    // Pointing the pointer to the base address of the array
    ptr = numbers; 

    printf("Enter 10 numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        // Using pointer arithmetic to store values
        // (ptr + i) gives the address of the ith element
        scanf("%d", (ptr + i));
    }

    printf("\nThe numbers you entered are:\n");
    for (i = 0; i < 10; i++) {
        // Using pointer arithmetic to fetch values
        // *(ptr + i) gets the value stored at that address
        printf("%d ", *(ptr + i));
    }

    printf("\n");
    return 0;
}