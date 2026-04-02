//WAP that finds the largest word in a given sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200], largest[50], current[50];
    int i = 0, j = 0, max_len = 0, cur_len = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0'; // Remove newline

    int len = strlen(sentence);
    
    for (i = 0; i <= len; i++) {
        // Check if current character is a space or end of string
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            current[j] = '\0'; // Terminate the current word
            cur_len = j;

            if (cur_len > max_len) {
                max_len = cur_len;
                strcpy(largest, current);
            }
            j = 0; // Reset for the next word
        } else {
            current[j] = sentence[i];
            j++;
        }
    }

    printf("The largest word is: \"%s\"\n", largest);
    printf("Length: %d\n", max_len);

    return 0;
}