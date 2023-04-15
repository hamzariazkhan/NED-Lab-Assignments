//PROGRAM TO FIND GOLDEN RATIO 	NAME HAMZA RIAZ KHAN 	ROLLNO CR-031
#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter a first number : ");
scanf("%d",&a);
printf("Enter your second number : ");
scanf("%d",&b);
if (a > b)
	c=a/b;
	d=(a+b)/a;
if (c == d && d == c)
	printf("Your given two numbers are in golden ratio");
else
	printf("Your given two numbers are not in golden ratio");
}
