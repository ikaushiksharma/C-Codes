#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){ // i represent no of rows
	    for(int j=1;j<=i;j++){ // j represents no of columns
	        printf("%d",j);
	    }
	    printf("\n");
	}
	return 0;
}