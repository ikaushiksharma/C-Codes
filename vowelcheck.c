#include <stdio.h>

int main() {
	char alpha;
	scanf("%c",alpha);
	if(alpha=='a'|| alpha=='e'|| alpha=='i'|| alpha=='o'|| alpha=='u' || alpha=='A'|| alpha=='E'|| alpha=='I'|| alpha=='O'|| alpha=='U'){
	    printf("Alphabet is a vowel");
	}else{
	    printf("Alphabet is a consonant");
	}
	return 0;
}