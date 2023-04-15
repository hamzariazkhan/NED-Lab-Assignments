#include<stdio.h>
int main()
{
	int a,b,c=1;
	printf("Enter your number to determine the factorial : ");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
		{c=c*b;
		}
	printf("The factorial of given number is : %d",c);
}
