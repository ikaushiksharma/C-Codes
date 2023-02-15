#include <stdio.h>
#include <string.h>

int main() {
	char a[10];
	char b[10];
	gets(a);
	gets(b);
    printf("%d",strcmp(a,b));
    // printf("%d",);
	return 0;
}