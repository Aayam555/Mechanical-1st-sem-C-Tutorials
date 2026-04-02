/*WAP to read the information of a file named “data.txt” and write its contents to another
file “record.txt”.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourcePtr, *destPtr;
    char ch;

    // 1. Open the source file for reading
    sourcePtr = fopen("data.txt", "r");
    if (sourcePtr == NULL) {
        printf("Error: Could not open data.txt. Ensure the file exists.\n");
        exit(1);
    }

    // 2. Open (or create) the destination file for writing
    destPtr = fopen("record.txt", "w");
    if (destPtr == NULL) {
        printf("Error: Could not create or open record.txt.\n");
        fclose(sourcePtr); // Clean up open pointer before exiting
        exit(1);
    }

    // 3. Copy process: Read each character until End of File
    while ((ch = fgetc(sourcePtr)) != EOF) {
        fputc(ch, destPtr);
    }

    printf("File contents successfully copied from data.txt to record.txt.\n");

    // 4. Close both files to release memory and save changes
    fclose(sourcePtr);
    fclose(destPtr);

    return 0;
}