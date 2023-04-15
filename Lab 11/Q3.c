// NAME HAMZA RIAZ KHAN 	ROLLNO CR-031
#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("Enter the size of an array : ");
	scanf("%d",&n);
	int arr[n];
	int *ptr;
	ptr=&arr[0];
	for(i=0; i<n; i++)
	{
		printf("Enter value of %d Index : ",i);
		scanf("%d",ptr+i);
		count=count+*(ptr+i);
	}
	printf("\nSum is : %d",count);
	return 0;
}
