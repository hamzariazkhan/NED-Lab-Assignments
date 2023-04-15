// NAME HAMZA RIAZ KHAN 	ROLLNO CR-031
#include<stdio.h>
int main()
{
	long value1=200000,value2;
	// Part A
	long *lptr;
	// Part B
	lptr=&value1;
	// Part C
	printf("Value of Value1 : %ld\n",*lptr);
	// Part D
	value2=*lptr;
	// Part E
	printf("value of value2 : %ld\n",value2);
	// Part F
	printf("Adress of value1 : %p\n",&value1);
	// Part G
	printf("Adress of value1 : %p\n",&lptr);
}
