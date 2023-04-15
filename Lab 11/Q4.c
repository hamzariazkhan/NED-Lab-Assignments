// NAME HAMZA RIAZ KHAN 	ROLLNO CR-031
#include<stdio.h>
int main()
{
	float arr[20];
	float large1=0,large2=0;
	float *ptr;
	ptr=&arr[0];
	int i;
	for(i=0; i<20; i++)
	{
		printf("Enter value of %d Index : ",i);
		scanf("%f",ptr+i);
		if(*(ptr+i)>=large1)
		{
			large1=*(ptr+i);
		}
	}
	for(i=0; i<20; i++)
	{
		if(*(ptr+i)==large1)
		{
			continue;
		}
		else if(*(ptr+i)>=large2)
		{
			large2=*(ptr+i);
		}
	}
	
	printf("\n2nd Largest nuber is : %.2f",large2);
	return 0;
}
