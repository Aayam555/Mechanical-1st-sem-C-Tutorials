//WAP to input a string from the user and display it in console


#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string: ");
    
    // Using fgets to allow spaces in the input
    // sizeof(str) ensures we don't overflow the array
    // stdin tells the program to read from standard input (keyboard)
    fgets(str, sizeof(str), stdin);

    printf("The entered string is: %s", str);

    return 0;
}