// NAME HAMZA RIAZ KHAN 	ROLLNO CR-031
#include<stdio.h>
int main()
{
	int array[10];
	int i;
	for(i=0; i<10; i++)
	{
		array[i]=i*i;
		printf("Value at %d Index : %d\n",i,*(array+i));
	}
	return 0;
}
