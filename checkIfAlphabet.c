#include <stdio.h>

int main() {
    char c;
    scanf("%c",&c);
    if((c>=97 && c<=122) || (c<=65 && c>=90)){
        printf("Character is an alphabet");
    }else{
        printf("Character is not an alphabet");
    }
}