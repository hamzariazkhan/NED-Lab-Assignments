#include<stdio.h>
int main ()
{
	float a,b;
	printf("Enter your Weight in kilograms : ");
	scanf("%f",&a);
	printf("Enter your Height in Meters : ");
	scanf("%f",&b);
	printf("Your Body Mass Index is : %f",(a)/(b*b));
}
