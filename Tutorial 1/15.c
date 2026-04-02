#include <stdio.h>
int main(){
    float a, b, result;
    char c;
    printf("Enter two numbers: ");
    scanf("%f %f", &a,&b);
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c", &c);
    switch(c){
    case '+':
        result = a+b;
        break;
    case '-':
        result = a-b;
        break;
    case '*':
        result = a*b;
        break;
    case '/':
        result = a/b;
        break;
    default:
        break;
    }

    printf("%.2f %c %.2f = %.2f", a, c, b, result);
    return 0;
}

