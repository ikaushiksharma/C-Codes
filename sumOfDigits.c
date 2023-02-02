#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	int temp=n;
	int sum=0;
	while(temp>0){
	    int dig=temp%10;
	    sum+=dig;
	    temp/=10;
	}
	return 0;
}