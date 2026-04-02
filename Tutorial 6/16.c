#include <stdio.h>
#include <stdlib.h>

// Structure to hold item details
struct Item {
    char code[20];
    char description[50];
    float rate;
    int quantity;
    float cost;
};

int main() {
    int n, i;
    float subtotal = 0, vat, serviceCharge, totalCost;
    FILE *fptr;

    // Open file for writing
    fptr = fopen("RECORD.txt", "w");
    if (fptr == NULL) {
        printf("Error: Could not create file.");
        return 1;
    }

    printf("Enter the number of items: ");
    scanf("%d", &n);

    struct Item items;

    // Input loop
    for (i = 0; i < n; i++) {
        printf("\nEnter details for item %d:\n", i + 1);
        printf("Item Code: ");
        scanf("%s", items[i].code);
        printf("Description: ");
        scanf(" %[^\n]s", items[i].description); // Reads string with spaces
        printf("Rate: ");
        scanf("%f", &items[i].rate);
        printf("Quantity: ");
        scanf("%d", &items[i].quantity);

        // Calculation for individual item cost
        items[i].cost = items[i].rate * items[i].quantity;
        subtotal += items[i].cost;
    }

    // Calculations for taxes and final total
    vat = 0.15 * subtotal;            // 15% VAT
    serviceCharge = 0.05 * subtotal;  // 5% Service Charge
    totalCost = subtotal + vat + serviceCharge;

    // Writing the formatted table to the file
    fprintf(fptr, "%-15s %-20s %-12s %-10s %-15s\n", "Item Code", "Description", "Rate", "Quantity", "Cost");
    fprintf(fptr, "---------------------------------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        fprintf(fptr, "%-15s %-20s %-12.2f %-10d %-15.2f\n", 
                items[i].code, items[i].description, items[i].rate, items[i].quantity, items[i].cost);
    }

    fprintf(fptr, "---------------------------------------------------------------------------\n");
    fprintf(fptr, "%-60s %-15.2f\n", "VAT 15%", vat);
    fprintf(fptr, "%-60s %-15.2f\n", "Service Charge 5%", serviceCharge);
    fprintf(fptr, "%-60s %-15.2f\n", "Total Cost", totalCost);

    fclose(fptr);
    printf("\nData has been successfully calculated and saved to RECORD.txt\n");

    return 0;
}
