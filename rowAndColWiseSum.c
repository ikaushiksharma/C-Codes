#include <stdio.h>

int main() {
    int arr[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<2;i++){
        int sum=0;
        for(int j=0;j<2;j++){
            sum+=arr[i][j];
        }
        printf("Sum of elements of Row %d is : %d\n",i,sum);
    }
    for(int i=0;i<2;i++){
        int sum=0;
        for(int j=0;j<2;j++){
            sum+=arr[j][i];
        }
        printf("Sum of elements of Col %d is : %d\n",i,sum);
    }
    
    return 0;
}