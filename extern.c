#include <stdio.h>

int main() {
    extern int a;
	printf("%d",a);
	return 0;
}
int a=10;