#include<stdio.h>
int main ()
{
	float a,b,c;
	printf("Enter you cost amount : ");
	scanf("%f",&a);
	if (a>=2000 && a<=4000)
		{printf("Your actual amount is : %f",a);
		b=(a*20)/100;
		printf("\nYour saved amount : %f",b);
		printf("\nYour remaining amount after getting discount : %f",a-b);}
	else if (a >= 4001 && a <= 6000)
		{printf("Your actual amount : %f",a);
		b=(a*30)/100;
		printf("\nYour saved amount : %f",b);
		printf("\nYour remaining amount after getting discount : %f",a-b);}
	else
		{printf("Your actualamount : %f",a);
		b=(a*50)/100;
		printf("\nYour saved amount : %f",b);
		printf("\nYour remaining amount after getting discount ; %f",a-b);}
}
