#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t>0){
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(x>10*y) printf("Account is spam. \n");
	    else printf("Account is not spam. \n");
	    t--;
	}
	return 0;
}