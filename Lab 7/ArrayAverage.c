#include<stdio.h>
int main()
{
  int count,sum=0,i,j,num;
  float avg;
  printf("Enter the size of array : ");
  scanf("%d",&num);
  int array[num];
  for (i=0;i<num;i++)
  {
  	printf("Enter your values : ");
  	scanf("%d",&array[i]);
  	if (array[i]>=0)
  		{
  		sum=sum+array[i];
  		count=count+1;
  		}	
  	}
  	avg=sum/count;
  	printf("Your average value is : %f",avg);
  	printf("\nYour sum is : %d",sum);
  	printf("\nYour count is : %d",count);
}
