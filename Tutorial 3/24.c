//WAP to input a string from the user and display it in the console by accessing individual characters.


#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Displaying individual characters:\n");
    while (str[i] != '\0') {
        printf("Character at index %d: %c\n", i, str[i]);
        i++;
    }

    return 0;
}