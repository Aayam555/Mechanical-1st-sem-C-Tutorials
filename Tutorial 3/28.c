// WAP to check whether a string entered by the user is Palindrome or not using library function.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp[100];

    printf("Enter a string: ");
    gets(str); 

    // Copy the original string into temp
    strcpy(temp, str);

    // Reverse the temp string
    strrev(temp);

    // Compare original and reversed strings
    if (strcmpi(str, temp) == 0) {
        printf("The string is a Palindrome.\n");
    } else {
        printf("The string is not a Palindrome.\n");
    }

    return 0;
}