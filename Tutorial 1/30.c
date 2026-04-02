#include <stdio.h>
int main(){
    int sum=1, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i=2; i<=n; i++){
        sum += i*(i-1);
    }
    printf("Sum = %d", sum);
    return 0;
}
