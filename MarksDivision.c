#include <stdio.h>

int main() {
    int marks;
	scanf("%d",&marks);
	if(marks>=60) printf("First Division");
	else if(marks>=50) printf("Second Division");
	else if(marks>=40) printf("Third Division");
	else if(marks>=33) printf("Pass");
	else if(marks<33) printf("Fail");
	return 0;
}