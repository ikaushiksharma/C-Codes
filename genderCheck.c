#include <stdio.h>

int main(){
	char gender;
	printf("Specify Your Gender: ");
	scanf("%c",&gender);
	if(gender=='m' || gender=='M'){
	    printf("Male");
	}else if(gender=='f' || gender=='F'){
	    printf("Female");
	}else{
	    printf("Others");
	}
	return 0;
}