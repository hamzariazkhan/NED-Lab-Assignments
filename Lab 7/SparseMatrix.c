#include<stdio.h>
int main ()
{
	int a,b,row,col,count;
	printf("Enter your Rows : ");
	scanf("%d",&a);
	printf("\nEnter your Columns : ");
	scanf("%d",&b);
	int array[a][b];
	for (row=0;row<a;row++)
	{
		for (col=0;col<b;col++)
		{
			printf("Enter your Matrix values : ");
			scanf("%d",&array[row][col]);
			if(array[row][col]==0)
				count=count+1;
		}
	}
	if(count>=((a*b)/2))
	{
		printf("\nYour Matrix is Sparse Matrix");
	}
	else
		printf("\nYour Matrix is not Sparse Matrix");
}
