/*WAP to read two integer numbers from the user
and check whether the first number is exactly
divisible by the second or not*/


#include <stdio.h>
int main(){
    int n1,n2;
    printf("Enter two number: ");
    scanf("%d %d", &n1, &n2);
    if(n1%n2 == 0){
        printf("%d is exactly divisible by %d", n1,n2);
    }
    else{
        printf("%d is not divisible by %d", n1,n2);
    }
    return 0;
}
