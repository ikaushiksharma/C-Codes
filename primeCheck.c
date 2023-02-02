#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    int i;
	for(i=2;i<n;i++){
	   if(n%i==0){
	       printf("Number is not Prime");
	       break;
	   }
	}
	if(i==n) printf("Number is prime.");
	return 0;
}