#include<stdio.h>
int main ()
{
	int a,b,row,col,var;
	printf("Enter your Rows : ");
	scanf("%d",&a);
	printf("Enter your Columns : ");
	scanf("%d",&b);
	int array[a][b];
	printf("\n");
	for (row=0;row<a;row++)
	{
		for (col=0;col<b;col++)
		{
			printf("Enter your Matrix values : ");
			scanf("%d",&array[row][col]);
		}
	}
	var=array[0][0];
	printf("\nYour given Matrix is : \n\n");
	for (row=0;row<a;row++)
	{
		for (col=0;col<b;col++)
		{
			printf("\t%d",array[row][col]);
			if(array[row][col]>var)
				var=array[row][col];
		}
		printf("\n");
	}
	printf("\nYour higest value is : %d",var);
}
