/*WAP to find the length of the string using the library function.*/


#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int length;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = '\0';

    length = strlen(str);

    printf("The length of the string is: %d\n", length);

    return 0;
}