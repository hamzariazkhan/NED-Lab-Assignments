//PROGRAM TO SHOW THE VARIOUS OPERATION 	NAME HAMZA RIAZ KHAN 	ROLLNO CTCY-031
#include<stdio.h>
int main ()
{
	int a, b;
	//SUM OPERATOR
	printf("The use of Sum Operator\nEnter your first number : ");
	scanf("%d", &a);
	printf("Enter your second number : ");
	scanf("%d", &b);
	printf("The sum of %d and %d are : %d",a ,b ,a+b); //we use sum operator to add two numbers
	
	//DIVIDE OPERATOR
	printf("\n\nThe use of Divide Operator\nEnter your first number : ");
	scanf("%d", &a);
	printf("Enter your second number : ");
	scanf("%d", &b);
	printf("The quotient of %d and %d are : %d",a ,b ,a/b); //we use divide operator to get the answer of two numbers by division
	
	//OR OPERATOR
	printf("\n\nThe use of 'OR' Operator\nThe condition must be a is lesser than 5 and b is greater 5\nEnter your first number : ");
	scanf("%d", &a);
	printf("Enter your Second number : ");
	scanf("%d", &b);
	if (a <= 5 || b >= 5) //If we have two conditions and any one of them will be correct we use 'OR' operator
	{printf("\nThe value of a is %d which is lesser than 5 or the value of b is %d which is greater than 5 then the statement is true",a ,b);}
	else
	{printf("\nThe value of a is %d which is greater than 5 or the value of b is %d which is lesser than 5 then the statement is false",a ,b);}
	
	//MODULUS OPERATOR
	printf("\n\nThe Use of Modulus Operator\nEnter your first number : ");
	scanf("%d", &a);
	printf("Enter your second number : ");
	scanf("%d", &b);
	printf("The modulus of %d and %d are : %d",a ,b ,a%b); //we use modulo operator to get the remainder of two numbers with the help of division
	
	//LESS THAN OPERATOR
	printf("\n\nThe use of less than operator\nEnter your first number : "); //we use less than operator to compare two values which is greater or which is lesser
	scanf("%d", &a);
	printf("Enter your second number : ");
	scanf("%d", &b);
	if (a < b)
	{printf("\nThe value of %d is lesser than %d ",a ,b);}
	else
	{printf("\nThe value of %d is greater than %d",a ,b);}
	
	//CHARACTER OR ASCII
	char c, d;
	printf("\n\nThe use of character or ASCII codes\nEnter your first number : ");//we use ASCII codes to input the values to computer because copmuter did notunderstant any langugae except 0's and 1's.These codeshave a fixed value already store in it
	scanf("\n%c",&c);
	printf("Enter your second number : ");
	scanf("\n%c",&d);
	if (c > d)
	{printf("\nThe value of c is %d greater than the value of d whose value is %d ",c ,d);}
	else
	{printf("\nThe value of c is %d lesser than the value of d whose value is %d",c ,d);}
	
	//LOGICAL NOT OPERATOR
	int x=10, z=8;
	printf("\n\n\n\nAnswer of 10 less than 8 is %d",(10<8));
	printf("\nAnswer of 10 not equal to 8 is %d",(10!=8));
	printf("\nAnswer of (c==10) AND (d>10) is: %d ",(x==10)&&(z>10));
	//printf("\n\nThe use of Logical NOT Operator\nEnter your first number : ");
	
	//AND OPERATOR
	printf("\n\nThe use of 'AND' Operator\nThe condition must be a is lesser than 5 and is greater 0\nEnter your first number : ");
	scanf("%d", &a);
	//printf("Enter your Second number : ");
	//scanf("%d", &b);
	if (a <= 10 &&  a>= 0) //If we have two conditions and both of them will be correct we use 'AND' operator
	{printf("\nThe value of a is %d which is lesser than 10 and is greater than 0 then the statement is true",a ,b);}
	else
	{printf("\nThe value of a is %d which is greater than 10 and is greater than 0 then the statement is false",a ,b);}
	
	//MULTIPLICATION OPERATOR
	float e;
	printf("\n\nThe use of Multiplication Operator\nEnter your first number : ");
	scanf("%d", &a);
	printf("Enter your second number : ");
	scanf("%f", &e);
	printf("The multiplication of %d and %f are : %f",a ,e ,a*e); //we use multiplication operator to multiply two numbers
	
	//GREATER THEN EQUAL TO OPERATOR
	printf("\n\nThe use of Greater Then Equal To Operator\nTHe condition must be that the value of a and b must not be greater then 35\nEnter your first number : ");
	scanf("%d", &a);
	printf("Enter your second number : ");
	scanf("%d", &b);
	if (a<=35)
	{printf("\nThe value of a is smaller then 35 ");}
	else
	{printf("\nThe value of a is greater then 35");}
	if (b<=35)
	{printf("\nThe value of b is smaller then 35 ");}
	else
	{printf("\nThe value of b is greater then 35");}
}
