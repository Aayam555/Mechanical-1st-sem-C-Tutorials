/*WAP to convert date in BS to date in AD using structure. Use the data difference
of current data.*/

#include <stdio.h>

struct Date {
    int yy, mm, dd;
};

// Simplified logic using the average difference of ~56 years, 8 months, 17 days.
// Note: For a professional app, you'd use a lookup table for exact BS month days.
int main() {
    struct Date bs, ad;
    
    printf("--- BS to AD Converter ---\n");
    printf("Enter BS Date (YYYY MM DD): ");
    scanf("%d %d %d", &bs.yy, &bs.mm, &bs.dd);

    // Initial subtraction (Approx 56 years, 8 months, 17 days)
    ad.yy = bs.yy - 57;
    ad.mm = bs.mm + 8;
    ad.dd = bs.dd + 17;

    // Logic to handle month overflow
    if (ad.dd > 31) {
        ad.dd -= 31;
        ad.mm++;
    }
    
    if (ad.mm > 12) {
        ad.mm -= 12;
        ad.yy++;
    }

    // Adjusting for the 56/57 year threshold
    // Since BS starts in mid-April, the year offset changes mid-year.
    if (bs.mm < 9 || (bs.mm == 9 && bs.dd < 17)) {
        // We stay in the previous AD year for the first 8.5 months of BS
    } else {
        // Year already incremented above
    }

    printf("\nEquivalent AD Date (Approx): %d/%02d/%02d\n", ad.yy, ad.mm, ad.dd);
    printf("Note: Exact conversion requires a calendar lookup table for BS month lengths.\n");

    return 0;
}