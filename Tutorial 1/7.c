/*WAP to find the greatest among the
three numbers using nested if else statement and using if...else if statement*/
#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter a number: ");
    scanf("%d %d %d", &a,&b,&c);
    if(a>b && a>c){
        printf("%d is greatest", a);
    }
    else if(b>a && b>c){
        printf("%d is greatest",b);
    }
    else{
        printf("%d is greatest", c);
    }


    if (a>b){
        if(a>c){
            printf("%d is greatest", a);
        }
    }
    return 0;
}
