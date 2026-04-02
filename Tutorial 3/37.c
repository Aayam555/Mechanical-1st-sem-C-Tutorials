// WAP to compare two strings entered by the user without using the library function.
#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0, flag = 0;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Loop until the end of either string is reached
    while (str1[i] != '\0' || str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            flag = 1;
            break;
        }
        i++;
    }

    if (flag == 0) {
        printf("The strings are exactly the same.\n");
    } else {
        printf("The strings are different.\n");
    }

    return 0;
}