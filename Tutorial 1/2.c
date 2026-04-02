/*WAP to read a number
from the user and check whether
the given number is even or odd*/

#include <stdio.h>

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("%d is even", num);
    }
    else{
        printf("%d is odd", num);
    }


    return 0;
}

