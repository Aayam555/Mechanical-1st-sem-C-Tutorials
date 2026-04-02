/*WAP to find the second largest
 (or middle number) among three number*/
#include <stdio.h>
int main(){
    int a,b,c,second, greatest, smallest;
    printf("Enter three number: ");
    scanf("%d %d %d", a, b, c);
    greatest = (a>b)?(a>c?a:c):(b>c?b:c);
    smallest = (a<b)?(a<c?a:c):(b<c?b:c);
    second = (a+b+c) - greatest - smallest;
    return 0;
}
