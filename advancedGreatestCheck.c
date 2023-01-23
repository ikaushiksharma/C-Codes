#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c){
        printf("All are equal");
    }
    else if(a>c && a==b){
        printf("A and B are greatest");
    }
    else if(a>b && a==c){
        printf("A and C are greatest");
    }
    else if(b>a && b==c){
        printf("B and C are greatest");
    }
    else if(a>c && a>b){
        printf("A is greatest");
    }
    else if(b>c && b>a){
        printf("B is greatest");
    }
    else if(c>a && c>b){
        printf("C is greatest");
    }
}