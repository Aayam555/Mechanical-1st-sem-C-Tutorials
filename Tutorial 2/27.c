/*WAP to read a number and call a function till
"yes" is entered by the user. Your program should count
the sum the numbers using static variables in the function
and return the average to the main function.*/

#include <stdio.h>
#include <string.h>

float processNumbers() {
    static float sum = 0;
    static int count = 0;
    int num;
    char choice[10];

    printf("Enter a number: ");
    scanf("%d", &num);

    sum += num;
    count++;

    printf("Do you want to enter another number? (yes/no): ");
    scanf("%s", choice);

    if (strcmp(choice, "yes") == 0) {
        return processNumbers();
    } else {
        return sum / count;
    }
}

int main() {
    float average = processNumbers();
    printf("\nThe final average of the numbers is: %.2f\n", average);
    return 0;
}