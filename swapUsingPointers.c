// Online C compiler to run C program online
// swap two numbers
#include <stdio.h>

void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main() {
    // Write C code here
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Before Swapping : a=%d, b=%d\n",a,b);
    swap(&a,&b);
    printf("After Swapping : a=%d, b=%d",a,b);
    return 0;
}