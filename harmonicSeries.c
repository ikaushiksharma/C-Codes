#include <stdio.h>

int main() {
	int n;
	scanf("%d",&n);
	float sum=0.0;
	
	for(int i=1;i<=n;i++){
	    sum+=1/(float)i;
	    if(i==1){
	        printf("1 + ");
	    }
	    else if(i==n){
	        printf("1/%d\n",n);
	    }
	    else{
	        printf("1/%d + ",i);
	    }
	}
	printf("Sum is : %f",sum);
	return 0;
}