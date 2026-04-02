/*WAP to find combination using function*/
#include <stdio.h>
int factorial(int n);
int C(int n, int r);
int main(){
	int n, r;
	printf("Enter values of n and r: ");
	scanf("%d %d", &n, &r);
	printf("C(%d, %d) = %d", n, r, C(n, r));
	return 0;
}
int factorial(int n){
	int result=1, i;
	for(i=1; i<=n; i++){
		result*=i;
	}
	return result;
}
int C(int n, int r){
	return factorial(n)/(factorial(r)*factorial(n-r));
}