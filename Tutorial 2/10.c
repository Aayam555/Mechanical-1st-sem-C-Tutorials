/*WAP to read an integer from keyboard and
 returns the sum of even valued digits using 
 function*/

#include <stdio.h>
int sumEvenDigits(int num) {
    int sum = 0;
    int digit;
    if (num < 0){
    	num = -num;
	}
    while (num > 0) {
        digit = num % 10;
        if (digit % 2 == 0) {
            sum += digit;
        }
        num = num / 10;
    }
    return sum;
}

int main() {
    int number, result;
    printf("Enter an integer: ");
    scanf("%d", &number);
    result = sumEvenDigits(number);
    printf("The sum of even-valued digits is: %d\n", result);
    return 0;
}
