/*WAP to convert degree in Celsius into Fahrenheit using function*/

#include <stdio.h>

float CF(float T);
int main(){
	float temp;
	printf("Enter temperature in celsius: ");
	scanf("%f", &temp);
	printf("%.2fC = %.2fF", temp, CF(temp));
	return 0;
}

float CF(float T){
	return ((9/5) * T + 32);
}

