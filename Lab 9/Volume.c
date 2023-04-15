#include<stdio.h>
void getdata(int h,int a)
{
	printf("Enter the height to calculate :");
	scanf("%d",&h);
	printf("Enter the base to calculate :");
	scanf("%d",&a);
	volumecal(h,a);	
}
void volumecal(int h,int a)
{
	float v=(a*a)*(h/3);
	printf("%f",v);
}

int main ()
{
	int h,a;
	getdata(h,a);
}
