#include<stdio.h>
 
 int main(){
     printf("Press 1 for Add\n      2 for Subtract\n      3 for Multiplication\n      4 for Division\n");
    int a, b;
    scanf("%d %d", &a, &b);
    int choice,res;
    scanf("%d", &choice);
    switch(choice){
        case 1:
            res=a+b;
            printf("%d is the answer",res);
            break;
        case 2:
            res=a-b;
            printf("%d is the answer",res);
            break;
        case 3:
            res=a*b;
            printf("%d is the answer",res);
            break;
        case 4:
            res=a/b;
            printf("%d is the answer",res);
            break;
        default:
            printf("Wrong Choice")
    }
    return 0;
 }