/*WAP to read a number from the user and test
 whether the given number is positive or negative*/

#include <stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num > 0){
        printf("%d is positive." num);
    } else if(num < 0){
        printf("%d is negative.", num);
    }

    return 0;
}
