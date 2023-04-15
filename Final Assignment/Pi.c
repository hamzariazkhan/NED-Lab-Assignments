//PROGRAM TO FIND THE VALUE PI 	NAME HAMZA RIAZ KHANN 	ROLNO CR-031
#include<stdio.h>
//#include <stdio.h>
int main() 
{
    int a, b,n=1; 
    float pi = 4;

    for (a = 0; a <= n ; a++) {
        b = a * 2 + 3;
        if (a % 2 == 0) {
            pi = pi - (4.0 / b);
        }
        else {
            pi = pi + (4.0 / b);
        }
		n++;
		if (n==998)
			break;
        printf("\nThe value of n = %d",n);
        printf("\t\tpi = %f", pi);
    }
	
}
