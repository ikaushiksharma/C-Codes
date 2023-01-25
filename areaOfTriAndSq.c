//area of triangle and square

#include <stdio.h>

int main() {
    
    int choice;
    
    printf("Enter 1 to find area of Triangle and 2 for finding area of Square : ");
 
    scanf("%d" ,&choice);
    int area;

    
    switch(choice){
        
        case 1 :
        int b,h;
        
        printf("Enter sides of triangle : ");
        scanf("%d %d",&b,&h);
        area=(b*h)/2;
        
        printf("Area of triangle is %d",area);
        break;
        
        case 2 :
        int x;
        
        printf("Enter side of square : ");
        scanf("%d",&x);
        
        area = x*x;
        
        printf("Area of square is %d",area);
        break;
        
        default:
        printf("INVALID INPUT");
    }
    
    
    
    return 0;
}