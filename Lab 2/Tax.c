//PROGRAM TO CALCULATE TAX FROM YOUR SALARY 	NAME HAMZA RIAZ KHAN 	ROLLNO CTCY-031
#include<stdio.h>
int main()
{
	float salary,tax,a;
	printf("Enter your amount of salary :");
	scanf("%f",&salary);
	printf("Enter your tax you want to calculate :");
	scanf("%f",&tax);
	a=(salary*tax)/100;
	printf("\n\n\nYour tax on your salary is :%f",a);
	printf("\nYour remaining salary is :%f",salary-a);
}
