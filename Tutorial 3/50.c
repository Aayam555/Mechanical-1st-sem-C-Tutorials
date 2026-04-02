/*WAP to insert a string into another string in the location specified by the user. Read the
string in the main function, pass them to another function along with inserting position
and return the resulting string.
*/


#include <stdio.h>
#include <string.h>

// Function prototype
char* insertString(char original[], char toInsert[], int pos);

int main() {
    char str1[200], str2[100];
    int position;

    printf("Enter the original string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0'; // Remove newline

    printf("Enter the string to insert: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; // Remove newline

    printf("Enter the position (0 to %lu) to insert: ", strlen(str1));
    scanf("%d", &position);

    if (position < 0 || position > strlen(str1)) {
        printf("Invalid position!\n");
    } else {
        // The function modifies str1 directly and returns its address
        char *result = insertString(str1, str2, position);
        printf("\nResulting string: %s\n", result);
    }

    return 0;
}

char* insertString(char original[], char toInsert[], int pos) {
    char buffer[300]; // Temporary buffer to hold the result
    int i = 0, j = 0, k = 0;

    // 1. Copy original string up to the insertion point
    for (i = 0; i < pos; i++) {
        buffer[k++] = original[i];
    }

    // 2. Copy the string to be inserted
    for (j = 0; toInsert[j] != '\0'; j++) {
        buffer[k++] = toInsert[j];
    }

    // 3. Copy the remaining part of the original string
    for (i = pos; original[i] != '\0'; i++) {
        buffer[k++] = original[i];
    }

    buffer[k] = '\0'; // Null terminate the new string

    // 4. Copy the buffer back to the original string
    strcpy(original, buffer);

    return original; 
}