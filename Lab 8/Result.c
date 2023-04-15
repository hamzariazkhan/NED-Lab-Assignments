//PROGRAM TO CORRECT THE GIVEN PROGRAM
#include<stdio.h>
int main (void)
{
	char a[11] = "hello world";
	int i;
	for(i = 0; i <= 11; i++)
	{
	//	a[i] = a[i + 1];
		printf("%d \t %s \n",i,a);//print the index number then string
	}
	printf("\n %d", a);//print the ASCII values of h e l l o w o r l d individually
}
