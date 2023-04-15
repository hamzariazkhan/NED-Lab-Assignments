#include<stdio.h>
int main( )
{
	int a,b,c;
	printf("NOTE:\nEnter a five digit or less than five digit number\nEnter a number which you want to check that it is divisible by 7 or not : ");
	scanf("%d",&a);
	b=((a%10)*2);
	a=a/10;
	c=a-b;
	if (c==7 || c==-7 || c==0)
		printf("\nYour given value is divisible by 7");
	else
	{
	b=((c%10)*2);
	c=c/10;
	a=c-b;
	if (a==7 || a==-7 || a==0)
		printf("\nYour given value is divisible by 7");
	else
	b=((a%10)*2);
	a=a/10;
	c=a-b;
	if (c==7 || c==-7 || c==0)
		printf("\nYour given value is divisible by 7");
	else
	b=((c%10)*2);
	c=c/10;
	a=c-b;
	if (a==7 || a==-7 || a==0)
		printf("\nYour given value is divisible by 7");
	b=((a%10)*2);
	a=a/10;
	c=a-b;
	if (c==7 || c==-7 || c==0)
		printf("\nYour given value is divisible by 7");
	else
		printf("\nYour given value is not divisible by 7");
}
}
