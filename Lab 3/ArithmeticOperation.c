//PROGRAM TO SHOW THE SUM, DIFFERENCE, PRODUCT, QUOTIENT, REMAINDER 	NAME HAMZA RIAZ KHAN 	ROLLNO CTCY-031
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter your First value which you want to sum,product,difference,quotient and remainder : ");
	scanf("%d", &a);
	printf("\nEnter your Second value which you want to sum,product,difference,quotient and remainder : ");
	scanf("%d", &b);
	printf("\n\nThe sum of %d and %d are : %d",a ,b ,a+b);
	printf("\n\nThe product of %d and %d are : %d",a ,b ,a*b);
	printf("\n\nThe difference of %d and %d are : %d",a ,b ,a-b);
	printf("\n\nThe quotient of %d and %d are : %d",a ,b ,a/b);
	printf("\n\nThe remainder of %d and %d are : %d",a ,b ,a%b);
}
