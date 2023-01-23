#include <stdio.h>

int main(){
    int userID,password;
    scanf("%d%d",&userID,&password);
    if(userID==101 && password==123){
        printf("Welcome User!");
    }
    else if(password!=123 && userID==101){
        printf("Password is invalid");
    }
    else if(userID!=101 && password==123){
        printf("User is invalid");
    }
    else{
        printf("Credentials are invalid");
    }
    return 0;
}