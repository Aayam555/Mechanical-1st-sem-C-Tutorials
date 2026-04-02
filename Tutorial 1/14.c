#include <stdio.h>

int main(){
    float units, bill;
    printf("Enter units: ");
    scanf("%f", &units);
    if(units<=20){
        bill+=80;
    } else if(units<=120 && units>20){
        bill+=80+7.30*(units-20);
    } else if(units>120){
        bill+=80+2.30*100+9*(units-120);
    }

    printf("Bill amount: %f", bill);


    return 0;
}
