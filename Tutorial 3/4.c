/*WAP to find the least among n numbers entered by the users*/


#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int numbers[n];

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    int least = numbers[0];

    for (i = 1; i < n; i++) {
        if (numbers[i] < least) {
            least = numbers[i];
        }
    }

    printf("The least number is: %d\n", least);

    return 0;
}