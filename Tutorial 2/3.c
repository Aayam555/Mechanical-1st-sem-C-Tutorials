/*WAP to find the sum of two numbers using function*/

int sum(int a, int b);
int main(){
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("Sum of two numbers %d and %d is %d", a, b, sum(a, b));
	return 0;
}
int sum(int a, int b){
	return a+b;
}