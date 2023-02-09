// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[5];
    int b[5];
    int c[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    int sum=0;
    for(int i=0;i<5;i++){
        c[i]=a[i]+b[i];
        
    }
    for(int i=0;i<5;i++){
        printf("%d ",c[i]);
    }
    return 0;
}