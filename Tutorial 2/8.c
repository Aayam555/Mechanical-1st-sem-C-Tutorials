/*WAP to find the LCM and HCF using function*/


#include <stdio.h>

int HCF(int a, int b);
int main(){
	int a, b;
	printf("Enter two number: ");
	scanf("%d %d", &a, &b);
	printf("HCF = %d\n", HCF(a, b));
	printf("LCM = %d", (a * b)/HCF(a,b));
	return 0;
}
int HCF(int a, int b){
	if(a == 0){
		return b;
	}
	else {
		return HCF(b%a, b);
	}
}

