//PROGRAM TO PRINT FULL NAME IN REVERSE DIRECTION 	NAME HAMZA RIAZ KHAN 	ROLLNO CR-031
#include<stdio.h>
#include<string.h>
int main ()
{
	char first[100],last[100];
	printf("Enter your First Name : ");
	scanf("%s",&first);
	printf("Enter your Last Name : ");
	scanf("%s",&last);
	strcat(first,last);
	printf("\nYour Full Name is : %s",first);
	printf("\nYour Full Name in Reverse is : %s",strrev(first));
}
