#include <stdio.h>

int main() {
    int n=3;
    int arr1[][3]={1,2,3,4,5,6,7,8,9};
    int arr2[][3]={1,1,1,2,2,2,1,1,1};
    int ans[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int val=0;
            for(int k=0;k<n;k++){
                val+=arr1[i][k]*arr2[k][j];
            }
            ans[i][j]=val;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}