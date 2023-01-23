#include <stdio.h>

int main() {
	int a=1;
	int b=2;
// 	a=a^b;
// 	b=a^b;
// 	a=a^b;
//  int temp=a;
//  a=b;
//  b=temp;
    a=a+b;
    b=a-b;
    a=a-b;
	printf("%d, %d",a,b);
	return 0;
}