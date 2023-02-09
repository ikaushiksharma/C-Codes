// Online C compiler to run C program online
#include <stdio.h>

int main() {
   
    int arr[5];
    float sum=0;
    float average=0;
    for(int i=0;i<5;i++){
       scanf("%d",&arr[i]);
       sum+=arr[i];
   }
   average=sum/5;
   printf("sum is :%.2f average is: %.2f",sum ,average);
    return 0;
}