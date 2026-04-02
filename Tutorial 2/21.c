/*WAP to display the armstrong number in the range using 
recursion*/

#include <stdio.h>
#include <math.h>

int countDigits(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + countDigits(n / 10);
}

int getArmstrongSum(int n, int power) {
    if (n == 0) {
        return 0;
    }
    return pow(n % 10, power) + getArmstrongSum(n / 10, power);
}

void checkRangeArmstrong(int current, int end) {
    if (current > end) {
        return;
    }

    int digits = (current == 0) ? 1 : countDigits(current);
    
    if (getArmstrongSum(current, digits) == current) {
        printf("%d ", current);
    }

    checkRangeArmstrong(current + 1, end);
}

int main() {
    int start, end;

    printf("Enter the starting range: ");
    scanf("%d", &start);
    printf("Enter the ending range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are: ", start, end);
    
    if (start <= end) {
        checkRangeArmstrong(start, end);
    }
    
    printf("\n");

    return 0;
}

