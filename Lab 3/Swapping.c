//PROGRAM FOR SWAPPING TWO VLUES USING THREE VARIABLES
#include<stdio.h>
int main()
{
	int x,y,temp;
	printf("Enter your first value : ");
	scanf("%d",&x);
	printf("Enter your second value : ");
	scanf("%d",&y);
	printf("The value of x is %d and value of y is %d",x,y);
	temp=x,x=y,y=temp;
	printf("\nAter Swapping:");
	printf("\nThe value of x is %d and value of y is %d",x,y);
	
//PROGRAM FOR SWAPPING TEO VALUES USING TWO VARIABLES
	x=50, y=100;
	printf("\n\n\n\nBefore swapping the value of x is %d and value of y is %d",x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\nAfter swapping the value of x is %d and the value of y is %d",x,y);
	}
