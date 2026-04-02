/*WAP that reads 10 integers from the
 keyboard, stores them in an array and displays
 entered numbers on the screen*/
 
 
 #include <stdio.h>

int main() {
    int numbers[10];
    int i;

    // Reading 10 integers from the keyboard
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Displaying the entered numbers
    printf("\nThe numbers you entered are:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}