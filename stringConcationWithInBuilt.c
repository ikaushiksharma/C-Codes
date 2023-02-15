#include <stdio.h>
#include <string.h>

void concatString(char a[],char b[]){
    int j=strlen(a);
    for(int i=0;i<strlen(b);i++){
        a[i+j]=b[i];
    }
    printf("%s",a);
}

int main() {
	char a[10];
	char b[5];
	gets(a);
	gets(b);
    // printf("%s",strcat(a,b));
    concatString(a,b);
	return 0;
}