/*WAP to the concept of function call by value*/

#include <stdio.h>

int swap(int a, int b);
int main(){
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	
	printf("a=%d and b=%d\n", a, b);
	swap(a,b);
	printf("a=%d and b=%d\n", a, b);
	return 0;
}
int swap(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("a=%d and b=%d\n", a, b);
}