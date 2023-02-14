#include <stdio.h>

int main() {
    int arr[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0];
    int secondMax=arr[0][0];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]>max){
                secondMax=max;
                max=arr[i][j];
            }
            else if (arr[i][j]>secondMax){
                secondMax=arr[i][j];
            }
        }
    }    
    printf("Max is: %d, Second Max is: %d",max,secondMax);
    return 0;
}