//take input from user as no and you've to display the day if it is 2 then it is tuesday

#include <stdio.h>

int main() {
    int x;
    printf("Enter the no. ")
    scanf("%d",&x);
    
    switch(x){
        case 1:
        printf("Monday");
        break;
        
        case 2:
        printf("Tuesday");
        break;
        
        case 3:
        printf("Wednesday");
        break;
        
        case 4:
        printf("Thursday");
        break;
        
        case 5:
        printf("Friday");
        break;
        
        case 6:
        printf("Saturday");
        break;
        
        case 7:
        printf("Sunday");
        break;
        
        default:
        printf("INVALID INPUT");
    }
    
    
    return 0;
}