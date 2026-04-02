#include <stdio.h>

int main(){
    float a,b,c;
    printf("Enter side lengths of triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if(a>b+c && b>a+c && c>a+b){
        if(a==b && b==c){
            printf("Equilateral");
        } else if(a==b || a==c || b==c){
            printf("Isosceles");
        } else{
            printf("Scalane");
        }
    }
    else{
        printf("Invalid Triangle");
    }

    return 0;
}
