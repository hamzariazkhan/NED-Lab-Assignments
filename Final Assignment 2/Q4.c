//PROGRAM TO PRINT PASCAL LAW 	NAME HAMZA RIAZ KHAN 	ROLLNO CR-031
#include<stdio.h>
int main()
{
	int n,i,j,k,l=1;
	printf("Enter number of rows : ");
	scanf("%d",&n);
	for(i=0; i<=n; i++)
	{
		for(j=1; j<=n-i; j++)
		{
			printf(" ");
		}
		for(k=0; k<=i; k++)
		{
			if(i==0 || k==0)
			{
				l=1;
			}
			else
			{
				l=l*(i-k+1)/k;
			}
			printf("%d ",l);
		}
		
		printf("\n");
	}	
}
