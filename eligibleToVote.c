#include <stdio.h>

int main() {
    int a,b,c;
    int user1=0,user2=0,user3=0;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=18){
        user1=1;
    }
    if(b>=18){
        user2=1;
    }
    if(c>=18){
        user3=1;
    }
    if(user1==1 && user2==1 && user3==1){
        printf("All users are eligible to vote.");
    }
    else if(user1==1 && user2==1){
        printf("User 1 and User 2 are eligible to vote");
    }
    else if(user1==1 && user3==1){
        printf("User 1 and User 3 are eligible to vote");
    }
    else if(user2==1 && user3==1){
        printf("User 2 and User 3 are eligible to vote");
    }
    else if(user1==1){
        printf("Only User 1 is eligible to vote");
    }
    else if(user2==1){
        printf("Only User 2 is eligible to vote");
    }
    else if(user3==1){
        printf("Only User 3 is eligible to vote");
    }
    else{
        printf("No one is eligible to vote");
    }
    return 0;
}