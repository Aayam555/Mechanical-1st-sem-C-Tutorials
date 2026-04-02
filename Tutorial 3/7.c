/*WAP to calculate the mean and standard deviation*/

#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float sum = 0, mean, varianceSum = 0, standardDeviation;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    float numbers[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &numbers[i]);
        sum += numbers[i];
    }

    mean = sum / n;

    for (i = 0; i < n; i++) {
        varianceSum += pow(numbers[i] - mean, 2);
    }

    standardDeviation = sqrt(varianceSum / n);

    printf("Mean: %.2f\n", mean);
    printf("Standard Deviation: %.2f\n", standardDeviation);

    return 0;
}
