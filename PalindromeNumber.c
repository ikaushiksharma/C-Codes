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
	if(rev==n)	printf("Number is Palindrome");
	else printf("Number is not Palindrome");
	return 0;
}