#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c){
        printf("All are equal");
    }
    else if(a>b){
        if(a>c) printf("A is greatest");
        else printf("C is greatest");
    }
    else{
        if(b>c) printf("B is greatest");
        else printf("C is greatest");
    }
    return 0;
}