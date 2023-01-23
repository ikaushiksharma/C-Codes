#include <stdio.h>

int main() {
	int num;
	scanf("%d",&num);
	int iterator=1;
	int factorial=1;
	while(iterator <=num){
	    factorial*=iterator;
	    printf("%d\n",factorial);
	    iterator++;
	}
	printf("Factorial of %d is %d",num,factorial);
	return 0;
}