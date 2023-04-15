#include<stdio.h>
int main ()
{
	int x;
	x=7 + 3 * 6/2-1;// First we solve Multiplication then Division then addition then Subtraction
	printf("%d",x);
	
	
	x= 2 % 2 + 2 * 2 - 2 / 2;//First we solve Modulus then Multiplication then Division  then Addition and then Subtraction
	printf("%d",x);
	
	x=( 3 * 9 * ( 3 + ( 9 * 3 / ( 3 ) ) ) );//First we solve Multiplication then Division then Addition
	printf("%d",x);
}
