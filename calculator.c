#include<stdio.h>
 
 int main(){
     printf("Press 1 for Add\n      2 for Subtract\n      3 for Multiplication\n      4 for Division\n")
    int a, b;
    scanf("%d %d", &a, &b);
    int op,res;
    int isValid = 1;
    scanf("%d", &op);
    if(op==1){
        res = a + b;
    }else if(op==2){
        res = a - b;
    }else if(op==3){
        res = a * b;
    }else if(op==4){
        res = a / b;
    }else{
        printf("Wrong Choice");
        isValid = 0;
    }
    if(isValid==1){
        printf("%d is the answer", res);
    }
    return 0;
 }