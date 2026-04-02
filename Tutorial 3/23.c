/* WAP to read a string with white space and display it in the console.*/

#include <stdio.h>

int main() {
    char str[100];

    printf("Enter a string with spaces: ");
    fgets(str, sizeof(str), stdin);

    printf("You entered: %s", str);

    return 0;
}
