#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){ // i represent no of rows
	    for(int j=n;j>i;j--){ // j represents no of columns
	        printf("*");
	    }
	    printf("\n");
	}
	return 0;
}