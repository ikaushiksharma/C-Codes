#include <stdio.h>

int main() {
	int a,b;
	a=10;
// 	b=a++||++a;
// 	b=a++ && ++a;
    b=0 && ++a;
// 	b=a++|++a;
	printf("%d, %d",a,b);
	return 0;
}