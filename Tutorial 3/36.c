/*WAP to check whether a given string is palindrome or not without using the library
function.
*/
#include <stdio.h>

int main() {
    char str[100];
    int i, j, length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Step 1: Find the length and remove the newline character
    while (str[length] != '\0') {
        length++;
    }
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }

    // Step 2: Compare characters from both ends
    i = 0;           // Start index
    j = length - 1;  // End index

    while (i < j) {
        if (str[i] != str[j]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
        i++;
        j--;
    }

    // Step 3: Display the result
    if (isPalindrome) {
        printf("The string \"%s\" is a Palindrome.\n", str);
    } else {
        printf("The string \"%s\" is not a Palindrome.\n", str);
    }

    return 0;
}
