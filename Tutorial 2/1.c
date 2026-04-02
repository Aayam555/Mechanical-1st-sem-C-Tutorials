/*WAP to find the factorial of a given number using function*/

#include <stdio.h>
int factorial(int n);
int main(){
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("%d! = %d", num, factorial(num));
	return 0;
}
int factorial(int n){
	int result=1, i;
	for(i=1; i<=n; i++){
		result*=i;
	}
	return result;
}