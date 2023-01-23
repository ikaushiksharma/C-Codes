#include <stdio.h>

int main() {
    int marks;
	scanf("%d",&marks);
	if(marks<33) printf("Fail");
	else if(marks>=33 && marks<40) printf("Pass");
	else if(marks>=40 && marks<50) printf("Third Division");
	else if(marks>=50 && marks<60) printf("Second Division");
	else if(marks>=60) printf("First Divison");
	return 0;
}