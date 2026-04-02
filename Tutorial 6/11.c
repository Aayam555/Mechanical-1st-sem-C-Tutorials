/*WAP to read the details of book authors and write it to a file, until the user confirms to
end. Then read and display the nth record in the file, where n is read from the user. The
data for authors must be represented by structures that contain name, nationality and
number of books published.
*/

#include <stdio.h>
#include <stdlib.h>

// Structure representing an author
struct Author {
    char name[50];
    char nationality[30];
    int booksPublished;
};

int main() {
    FILE *fptr;
    struct Author auth;
    char choice;
    int n;

    // --- PHASE 1: WRITING TO THE FILE ---
    // Opening in "ab" (append binary) so existing data isn't deleted
    fptr = fopen("authors.dat", "ab");
    if (fptr == NULL) {
        printf("Error opening file!");
        exit(1);
    }

    do {
        printf("\nEnter Author Details:\n");
        printf("Name: ");
        scanf(" %[^\n]", auth.name); // Reads string with spaces
        printf("Nationality: ");
        scanf(" %[^\n]", auth.nationality);
        printf("Number of Books Published: ");
        scanf("%d", &auth.booksPublished);

        // Write the whole structure block to the file
        fwrite(&auth, sizeof(struct Author), 1, fptr);

        printf("Do you want to add another author? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    fclose(fptr);

    // --- PHASE 2: READING THE Nth RECORD ---
    fptr = fopen("authors.dat", "rb"); // Open in "rb" (read binary)
    if (fptr == NULL) {
        printf("Error opening file for reading!");
        exit(1);
    }

    printf("\nEnter the record number (n) you wish to display: ");
    scanf("%d", &n);

    // Logic: Jump to (n-1) * size of one record from the start (SEEK_SET)
    fseek(fptr, (n - 1) * sizeof(struct Author), SEEK_SET);

    // Read 1 record into the 'auth' variable
    if (fread(&auth, sizeof(struct Author), 1, fptr) == 1) {
        printf("\n--- Details of Record %d ---\n", n);
        printf("Name: %s\n", auth.name);
        printf("Nationality: %s\n", auth.nationality);
        printf("Books Published: %d\n", auth.booksPublished);
    } else {
        printf("\nError: Record %d does not exist in the file.\n", n);
    }

    fclose(fptr);
    return 0;
}