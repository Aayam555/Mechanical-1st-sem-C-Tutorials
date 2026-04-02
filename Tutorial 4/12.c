/*WAP to read structure college having name. estDate and location where estDate
is another structure having day, month and year as members. Display the records
of 10 colleges.*/


#include <stdio.h>

// Inner structure to represent a date
struct date {
    int day;
    int month;
    int year;
};

// Outer structure to represent a college
struct college {
    char name[100];
    struct date estDate; // Nested structure member
    char location[100];
};

int main() {
    struct college c[10];
    int i;

    printf("--- Enter Details for 10 Colleges ---\n");

    // Reading data for 10 colleges
    for(i = 0; i < 10; i++) {
        printf("\nCollege %d Details:\n", i + 1);
        
        printf("Name: ");
        scanf(" %[^\n]", c[i].name);

        printf("Established Date (DD MM YYYY): ");
        scanf("%d %d %d", &c[i].estDate.day, &c[i].estDate.month, &c[i].estDate.year);

        printf("Location: ");
        scanf(" %[^\n]", c[i].location);
    }

    // Displaying the records
    printf("\n%-25s %-15s %-20s\n", "College Name", "Est. Date", "Location");
    printf("------------------------------------------------------------\n");

    for(i = 0; i < 10; i++) {
        // Accessing nested members using the dot (.) operator twice
        printf("%-25s %02d/%02d/%-9d %-20s\n", 
                c[i].name, 
                c[i].estDate.day, 
                c[i].estDate.month, 
                c[i].estDate.year, 
                c[i].location);
    }

    return 0;
}