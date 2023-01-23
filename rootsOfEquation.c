#include <math.h>
#include <stdio.h>

int main() {
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	double D=b*b-4*a*c;
	if(D<0){
	    printf("Roots are imaginary");
	}else if(D>0){
	   double root1=(-b+sqrt(D))/(2*a);
	   double root2=(-b-sqrt(D))/(2*a);
	   printf("Roots of the given equation are : %.2f, %.2f",root1,root2);
	}
	else{
	   printf("Roots are equal, i.e : %d",-b/2*a);
	}
	return 0;
} 