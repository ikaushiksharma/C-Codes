#include<stdio.h>

int main() {
    int arr[5]={7,5,41,20,3};
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}