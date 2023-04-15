#include<stdio.h>
void function()
{
	printf("INITIAL COST\t\tANNUAL FUEL COST\t\tTAX RATE");
	printf("\n67000\t\t\t\t2300\t\t\t 0.025");
	printf("\n62000\t\t\t\t2500\t\t\t 0.025");
	printf("\n75000\t\t\t\t1850\t\t\t 0.020");
}
int main()
{
	function();
	int a=67000,b=62000,c=75000;//initial cost
	int d=2300,e=2500,f=1850;//annual fuel
	float g=0.025,h=0.020,g1,h1,i1;//tax rate
	d=d*5,e=e*5,f=f*5;//annual fuel for 5 year
	g1=g*a*5,h1=g*b*5,i1=h*c*5;//tax rate for 5 years
	g1=a+d+g1,h1=b+e+h1,i1=c+f+i1;
	printf("\n\nThe house cost for first one is : %f",g1);
	printf("\nThe house cost for first second is : %f",h1);
	printf("\nThe house cost for first third is : %f",i1);
}
