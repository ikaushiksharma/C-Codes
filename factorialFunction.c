#include <stdio.h>

int factorial(int n){
    int fact=1;
    while(n>0){
        fact*=n;
        n--;
    }
    return fact;
}
int main() {
	int n;
	scanf("%d",&n);
	printf("Factorial of given number is : %d",factorial(n));
	return 0;
}