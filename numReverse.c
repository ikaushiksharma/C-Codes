#include <stdio.h>

int reverse(int n){
    int rev=0;
    while(n>0){
        int dig=n%10;
        rev=rev*10+dig;
        n/=10;
    }
    return rev;
}
int main() {
	int n;
	scanf("%d",&n);
	int rev=reverse(n);
	printf("%d",rev);
	return 0;
}