#include<stdio.h>
int main()
{
	int r,s,n;
	printf("Enter your number : ");
	scanf("%d",&n);
	for(r=1 ; r<=n ; r++)
	{
		for(s=1 ; s<=n-r ; s++)
		{
			printf(" ");
		}
		for(s=1 ; s<=2*r-1 ; s++)
		{
			printf("*");
		}
		
	printf("\n");
	}
	for(r=n-1 ; r>=1 ; r--)
	{
		for(s=1 ; s<=n-r ; s++)
		{
			printf(" ");
		}
		for(s=1 ; s<=2*r-1 ; s++)
		{
			printf("*");
		}
	printf("\n");
}
}
