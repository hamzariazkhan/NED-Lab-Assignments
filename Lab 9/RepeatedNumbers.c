#include<stdio.h>

void countfrequency(int array[],int i)
{
	int count=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count10=0;
	int a;
	for (a=0; a<i ;a++)
	{
		if(array[a]==0)
			count=count+1;
		if(array[a]==1)
			count1=count1+1;
		if(array[a]==2)
			count2=count2+1;
		if(array[a]==3)
			count3=count3+1;
		if(array[a]==4)
			count4=count4+1;
		if(array[a]==5)
			count5=count5+1;
		if(array[a]==6)
			count6=count6+1;
		if(array[a]==7)
			count7=count7+1;
		if(array[a]==8)
			count8=count8+1;
		if(array[a]==9)
			count9=count9+1;
		if(array[a]==10)
			count10=count10+1;
	}
	printf("0 appeared %d times",count);
	printf("\n1 appeared %d times",count1);
	printf("\n2 appeared %d times",count2);
	printf("\n3 appeared %d times",count3);
	printf("\n4 appeared %d times",count4);
	printf("\n5 appeared %d times",count5);
	printf("\n6 appeared %d times",count6);
	printf("\n7 appeared %d times",count7);
	printf("\n8 appeared %d times",count8);
	printf("\n9 appeared %d times",count9);
	printf("\n10 appeared %d times",count10);
}
int main ()
{
	int i,n;
	printf("Enter your array size : ");
	scanf("%d",&n);
	int array[n];
	for (i=0; i<n; i++)
	{
		printf("Enter your numbers : ");
		scanf("%d",&array[i]);
		if (array[i]<0 || array[i]>10)
		{
			printf("You have enter worng values");
			break;
		}
	}
	countfrequency(array,n);
}
