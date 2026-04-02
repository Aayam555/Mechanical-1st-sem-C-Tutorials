#include <stdio.h>
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    switch(num%2){
    case 0:
        printf("%d is Even.", num);
        break;
    case 1:
        printf("%d is Odd.", num);
        break;
    default:
        printf("Invalid");
    }
    return 0;
}
