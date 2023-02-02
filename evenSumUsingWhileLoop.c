#include <stdio.h>

int main() {
	int i=1;
	int sum=0;
	while(i<=20){
	    if(i%2==0) sum+=i;
	    i++;
	}
	printf("%d",sum);
	return 0;
}