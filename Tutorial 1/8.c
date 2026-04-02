/*WAP to find the greatest among four numbers*/
#include <stdio.h>

int main(){
    int a,b,c,d,max1,max2,greatest;
    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    max1 = (a > b) ? a : b;
    max2 = (c > d) ? c : d;
    greatest = (max1 > max2) ? max1 : max2;
    printf("%d is the greatest", greatest);
    return 0;
}
