#include <stdio.h>

int main() {
    int i;

    printf("ASCII Table (0 to 255):\n");
    printf("--------------------------\n");
    printf("Value\tCharacter\n");
    printf("--------------------------\n");

    for (i = 0; i <= 255; i++) {
        // Characters 0-31 are non-printable control characters
        if (i < 32) {
            printf("%d\t[Control Char]\n", i);
        } else {
            printf("%d\t%c\n", i, i);
        }
    }

    return 0;
}
