#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c==180){
        printf("Triangle is Valid");
        if(a==90 || b==90 || c==90){
            printf(" and right angled triangle");
        }
        else{
            printf(" but not right angled triangle");
        }
    }
    else{
        printf("Triangle is not valid");
    }
    return 0;
}