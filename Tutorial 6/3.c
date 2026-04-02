//WAP in C to copy the contents of one text file into another. The name of the source and
//the destination files has to be entered by the user.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *sourcePtr, *destPtr;
    char sourceFile[50], destFile[50], ch;

    // 1. Get file names from the user
    printf("Enter the source file name (e.g., data.txt): ");
    scanf("%s", sourceFile);
    printf("Enter the destination file name (e.g., backup.txt): ");
    scanf("%s", destFile);

    // 2. Open source file for reading
    sourcePtr = fopen(sourceFile, "r");
    if (sourcePtr == NULL) {
        printf("Error: Cannot open source file %s\n", sourceFile);
        exit(1);
    }

    // 3. Open destination file for writing
    destPtr = fopen(destFile, "w");
    if (destPtr == NULL) {
        printf("Error: Cannot open/create destination file %s\n", destFile);
        fclose(sourcePtr); // Close source before exiting
        exit(1);
    }

    // 4. Copy process: Read from source and write to destination
    while ((ch = fgetc(sourcePtr)) != EOF) {
        fputc(ch, destPtr);
    }

    printf("\nFile copied successfully from %s to %s.\n", sourceFile, destFile);

    // 5. Close both files
    fclose(sourcePtr);
    fclose(destPtr);

    return 0;
}
