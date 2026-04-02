#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    // Convert to lowercase to minimize the number of switch cases
    char lowerCh = tolower(ch);

    switch (lowerCh) {
        // Vowel cases
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is a Vowel.\n", ch);
            break;

        // Digit cases
        case '0': case '1': case '2': case '3': case '4':
        case '5': case '6': case '7': case '8': case '9':
            printf("%c is a Digit.\n", ch);
            break;

        // Default handles consonants and special characters
        default:
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                printf("%c is a Consonant.\n", ch);
            } else {
                printf("%c is a Special Character.\n", ch);
            }
            break;
    }

    return 0;
}
