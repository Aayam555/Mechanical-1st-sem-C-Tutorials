/*WAP to read a number from the user and whether a given number is prime or composite*/
#include <stdio.h>
int main(){
    int i, num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (i=2; i<num; i++){
        if (num%i == 0){
            printf("%d is composite.", num);
            break;
        }
    }
    printf("%d is prime.", num);
    return 0;
}
