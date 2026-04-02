/*WAP to read a number from keyboard and test whether
the number is exactly divisible by 3 but not by 11 or not*/

int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num%3 == 0 && num%11 != 0){
        printf("%d is exactly divisible by 3 but not by 11", num);
    }
    else{
        printf("Not satisfied");
    }
    return 0;
}
