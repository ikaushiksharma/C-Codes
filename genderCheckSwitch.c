#include<stdio.h>
 
int main(){
    printf("Enter Your Gender\n");
    char gender;
    scanf("%c",&gender);
    switch(gender){
        case 'm':
        case 'M':
            printf("Male");
            break;
        case 'f':
        case 'F':
            printf("Female");
            break;
        case 'O':
        case 'o':
            printf("Others");
            break;
        default:
            printf("Invalid Option");
    }
    return 0;
 }