#include<stdio.h>
int main ()
{
	int a,b,row,col,count;
	printf("Enter your Rows : ");
	scanf("%d",&a);
	int array[a][a];
	for (row=0;row<a;row++)
	{
		for (col=0;col<a;col++)
		{
			printf("Enter your Matrix values : ");
			scanf("%d",&array[row][col]);
		}
	}
	for (col=0;col<a;col++)
	{
		for (row=0;row<a;row++)
		{
			if (array[row][col]==array[col][row])
				count=count+1;
		}
	}
	if(count==a*a)
	{
		printf("\nYour Matrix is Symmetric Matrix");
	}
	else
		printf("\nYour Matrix is Asymmetric Matrix");
}
