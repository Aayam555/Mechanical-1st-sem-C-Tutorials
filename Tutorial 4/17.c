/*Create a structure to store the name of a batsman, runs scored and no of times
the batsman is dismissed. In the program, read the data of 5 players and display
the batting average of player whose name is entered by the user. Batting
average is given by total_runs/total_dismissals.
*/

#include <stdio.h>
#include <string.h>

struct batsman {
    char name[50];
    int runs;
    int dismissals;
    float average;
};

int main() {
    struct batsman b[5];
    char searchName[50];
    int i, found = 0;

    // Reading data for 5 players
    for(i = 0; i < 5; i++) {
        printf("\n--- Details for Player %d ---\n", i + 1);
        printf("Enter Name: ");
        scanf(" %[^\n]", b[i].name);
        printf("Enter Total Runs: ");
        scanf("%d", &b[i].runs);
        printf("Enter No. of Dismissals: ");
        scanf("%d", &b[i].dismissals);

        // Calculate average immediately
        if(b[i].dismissals > 0) {
            b[i].average = (float)b[i].runs / b[i].dismissals;
        } else {
            // If never dismissed, the average is their total runs
            b[i].average = (float)b[i].runs; 
        }
    }

    // Searching by Name
    printf("\nEnter the Name of the batsman to see their average: ");
    scanf(" %[^\n]", searchName);

    for(i = 0; i < 5; i++) {
        // strcasecmp can be used for case-insensitive search if available
        if(strcmp(b[i].name, searchName) == 0) {
            printf("\n--- Player Statistics ---\n");
            printf("Name:      %s\n", b[i].name);
            printf("Runs:      %d\n", b[i].runs);
            printf("Dismissed: %d times\n", b[i].dismissals);
            printf("Average:   %.2f\n", b[i].average);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("\nPlayer '%s' not found in the records.\n", searchName);
    }

    return 0;
}