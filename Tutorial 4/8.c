//WAP to add two distances given in feet and inch format using structure

#include <stdio.h>

// Defining the structure
struct Distance {
    int feet;
    float inch;
};

int main() {
    struct Distance d1, d2, sum;

    // Input for first distance
    printf("Enter 1st distance:\n");
    printf("Feet: ");
    scanf("%d", &d1.feet);
    printf("Inches: ");
    scanf("%f", &d1.inch);

    // Input for second distance
    printf("\nEnter 2nd distance:\n");
    printf("Feet: ");
    scanf("%d", &d2.feet);
    printf("Inches: ");
    scanf("%f", &d2.inch);

    // Adding feet and inches separately
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    // Conversion logic: 12 inches = 1 foot
    if (sum.inch >= 12.0) {
        sum.feet = sum.feet + (int)(sum.inch / 12); // Add whole feet
        sum.inch = (int)sum.inch % 12 + (sum.inch - (int)sum.inch); // Keep remaining inches
        
        // Simpler way to write the logic above:
        // while (sum.inch >= 12.0) {
        //     sum.inch -= 12.0;
        //     sum.feet++;
        // }
    }

    // Displaying the result
    printf("\nTotal Distance: %d'-%.2f\"\n", sum.feet, sum.inch);

    return 0;
}