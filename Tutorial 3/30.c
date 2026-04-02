/*WAP to convert a string entered in uppercase into lowercase without using library
function.
*/


#include <stdio.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string in UPPERCASE: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        // Check if the character is an uppercase letter (A-Z)
        if (str[i] >= 'A' && str[i] <= 'Z') {
            // Add 32 to convert to lowercase
            str[i] = str[i] + 32;
        }
        i++;
    }

    printf("String in lowercase: %s", str);

    return 0;
}