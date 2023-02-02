#include <stdio.h>

int main() {
	int a=0;
	int b=1;
	int n;
	int c;
	scanf("%d",&n);
	while(n>0){
	    printf("%d, ",a);
	    int c=a+b;
	    a=b;
	    b=c;
	    n--;
	}
	return 0;
}