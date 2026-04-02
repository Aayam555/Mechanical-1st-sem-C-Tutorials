/*WAP to find the greatest among three numbers using function*/

#include <stdio.h>
int greatest(int a, int b, int c);
int main(){
	int a, b, c;
	printf("Enter three numbers: ");
	scanf("%d %d %d", &a,&b,&c);
	printf("Greatest is %d", greatest(a, b, c));
	return 0;
}
int greatest(int a, int b, int c){
	if(a>b && a>c){
		return a;
	}
	else if(b>a && b>c){
		return b;
	}
	else{
		return c;
	}
}