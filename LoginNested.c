#include <stdio.h>

int main(){
    int userID,password;
    scanf("%d%d",&userID,&password);
    if(userID==101){
        if(password==123) printf("Welcome User!");
        else printf("Password is invalid");
    }
    else if(password==123){
        printf("User is invalid");
    }
    else{
        printf("Credentials are invalid");
    }
    return 0;
}