#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isArmstrong(int num){
    int count=0;
    int temp=num;
    int sum=0;
    while(temp>0){
        count++;
        temp/=10;
    }
    temp=num;
    while(temp>0){
        int dig=temp%10;
        temp/=10;
        sum+=pow(dig,count);
    }
    return sum==num;
}

int main() {
	int i=1;
	int number;
	scanf("%d",&number);
	while(i<=number){
	    if(isArmstrong(i)){
	        printf("%d is armstrong number\n",i);
	    }
	    i++;
	}
	return 0;
}