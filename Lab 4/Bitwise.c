#include <stdio.h> 

int main() 
{ 
    char num; 
      
    printf("Enter an 8-bit number: "); 
    scanf("%c", &num); 
      
    // Check if the 4th bit is on 
    if((num >> 3) & 1) 
    { 
        num = num & (~(1 << 3)); 
    } 
      
    // Check if the 7th bit is on 
    if((num >> 6) & 1) 
    { 
        num = num & (~(1 << 6)); 
    } 
      
    printf("The modified number is %c", num); 
    return 0; 
}
