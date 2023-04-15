//PROGRAM TO ARRANGE THE CARD BY ADDING CARD NUMBERS 	NAME HAMZA RIAZ KHAN 	ROLLNO CR-031
#include<stdio.h>
void getdata(int i,int n)
{
	printf("How many cards do you have? : ");
	scanf("%d",&n);
	int array[n];
	for (i=0; i<n; i++)
	{
		printf("Enter your card numbers : ");
		scanf("%d",&array[i]);
	}
	sort(array,n);
}
int sort(int array[], int n)
{
	int i,j,b,c,temp,sum;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
		{
			b=(array[j]%10)+(array[j]/10)%10+(array[j]%100);
			c=(array[j+1]%10)+(array[j+1]/10)%10+(array[j+1]%100);
			if(b>c)
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
		
	}
	display(array,j,n);
}
void display(int array[],int j,int n)
{
	int a;
	printf("Sorted Cards are : ");
	for(a=0; a<n; a++)
	{
		printf("\n%d",array[a]);
	}
}
int main()
{
	int i,n;
	getdata(i,n);
}
