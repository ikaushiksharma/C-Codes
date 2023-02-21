#include <stdio.h>

void addOne(int *a){
    (*a)++;
}

int main() {
    // Write C code here
    int a;
    scanf("%d",&a);
    printf("Before Incrementing : a=%d\n",a);
    addOne(&a);
    printf("After Incrementing : a=%d",a);
    return 0;
}