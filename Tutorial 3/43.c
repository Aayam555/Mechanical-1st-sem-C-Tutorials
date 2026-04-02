/*WAP to read a word from a main function, pass it into a function that will convert all of
its characters into uppercase if the first character is in lower case and into lowercase if
the first character is in uppercase. Display the converted string from the main function.
*/

#include <stdio.h>
#include <string.h>

// Function prototype
void convertString(char str[]);

int main() {
    char word[100];

    printf("Enter a word: ");
    scanf("%s", word); // Reads a single word

    // Pass the word to the function for conversion
    convertString(word);

    printf("Converted word: %s\n", word);

    return 0;
}

// Function to convert case based on the first character
void convertString(char str[]) {
    int i = 0;

    // Check if the first character is lowercase
    if (str[0] >= 'a' && str[0] <= 'z') {
        // Convert the entire string to Uppercase
        while (str[i] != '\0') {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
            i++;
        }
    }
    // Check if the first character is uppercase
    else if (str[0] >= 'A' && str[0] <= 'Z') {
        // Convert the entire string to Lowercase
        while (str[i] != '\0') {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + 32;
            }
            i++;
        }
    }
}