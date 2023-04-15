// NAME HAMZA RIAZ KHAN 	ROLLNO CR-031
#include<stdio.h>
void sortfunction(int *ptr,int N,int CHOICE)
{
	int i,j,a;
	if(CHOICE==1)
	{
		for(i=0; i<N-1; i++)
		{
			for(j=i+1; j<N; j++)
			{
				if((ptr+i)<(ptr+j))
				{
					a=*(ptr+j);
					*(ptr+j)=*(ptr+i);
					*(ptr+i)=a;
				}
			}
		}
	}
	else if(CHOICE==2)
	{
		for(i=0; i<N-1; i++)
		{
			for(j=i+1; j<N; j++)
			{
				if((ptr+i)>(ptr+j))
				{
					a=*(ptr+j);
					*(ptr+j)=*(ptr+i);
					*(ptr+i)=a;
				}
			}
		}
	}
	else
		printf("Invalid Input");
}

int main()
{
	int N,o,i;
	printf("Enter size of an Array : ");
	scanf("%d",&N);
	printf("\n");
	
	int arr[N];
	int *ptr;
	ptr=&arr[0];
	for(i=0; i<N; i++)
	{
		printf("Enter value of %d Index : ",i);
		scanf("%d",ptr+i);
	}
	
	int CHOICE;
	printf("\nEnter '1' for Descending order or '2' for Asscending order\nEnter : ");
	scanf("%d",&CHOICE);
	
	sortfunction(&arr,N,CHOICE);
	
	for(i=0; i<N; i++)
	{
		printf("\n%d Index : %d",i,*(ptr+i));
	}
}
