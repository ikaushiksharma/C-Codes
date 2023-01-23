#include <stdio.h>

int main(){
    char alphabet;
    printf("Enter the alphabet : ");
    scanf("%c", &alphabet);

    switch(alphabet){
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
            printf("Vowel");
            break;
        default :
            printf("Consonant");
            break;
    }
    return 0;
}