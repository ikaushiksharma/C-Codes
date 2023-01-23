#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    if(a%5==0 && a%11==0){
        printf("%d is divisible by both 5 and 11",a);
    }else if(a%5==0){
        printf("%d is divisible by 5 but not 11", a);
    }else if(a%11==0){
        printf("%d is divisible by 11 but not 5", a);
    }else{
        printf("Number is not divisible by neither 5 nor 11");
    }
}