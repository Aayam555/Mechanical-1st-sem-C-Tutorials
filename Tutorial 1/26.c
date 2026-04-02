#include <stdio.h>
int main(){
    int num, fact1=1, fact2=1, j=1;
    printf("Enter number: ");
    scanf("%d", &num);
    for (int i=1; i<=num; i++){
        fact1*=i;
    }
    printf("%d! = %d\n", num, fact1);
    while(j!=num+1){
        fact2*=j;
        j++;
    }
    printf("%d! = %d", num, fact2);
    return 0;
}
