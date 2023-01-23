#include<stdio.h>

int main(){
    int amount;
    scanf("%d",&amount);
    int n500,n100,n50,n20,n10,n5,n2,n1;
    n500=amount/500;
    amount%=500;
    n100=amount/100;
    amount%=100;
    n50=amount/50;
    amount%=50;
    n20=amount/20;
    amount%=20;
    n10=amount/10;
    amount%=10;
    n5=amount/5;
    amount%=5;
    n2=amount/2;
    amount%=2;
    n1=amount;
    printf(" Number of notes of 500 : %d \n Number of notes of 100 : %d \n Number of notes of 50 : %d \n Number of notes of 20 : %d \n Number of notes of 10 : %d \n Number of notes of 5 : %d \n Number of notes of 2 : %d \n Number of notes of 1 : %d \n",n500,n100,n50,n20,n10,n5,n2,n1);
}