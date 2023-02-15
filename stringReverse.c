#include <stdio.h>

int main() {
	char s[20]="KaushikSharma";
	int j=strlen(s)-1;
	for(int i=0;i<=strlen(s)/2;i++){
	    char temp=s[i];
	    s[i]=s[j];
	    s[j]=temp;
	    j--;
	}
	printf("%s",s);
	return 0;
}