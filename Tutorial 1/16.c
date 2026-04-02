#include <stdio.h>
#include <math.h>
#define PI 3.1415
int main(){
    int choose;
    float r, h, TSA, CSA;
    printf("1. Sphere\n 2. Cylinder\n 3. Cone\n Enter number, radius and height: ");
    scanf("%d %f %f", &choose, &r, &h);
    switch(choose){
    case 1:
        TSA = 4*PI*r*r;
        CSA = 4*PI*r*r;
        break;
    case 2:
        TSA = 2*PI*r*h + 2*PI*r*r;
        CSA = TSA - 2*PI*r*r;
        break;
    case 3:
        TSA = PI*r*r + PI*r*(sqrt(h*h+r*r));
        CSA = TSA - PI*r*r;
        break;
    }

    printf("TSA = %.2f and CSA = %.2f", TSA, CSA);
    return 0;
}
