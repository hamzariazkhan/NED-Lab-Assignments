//PROGRAM TO CALCULATE SIMPLE INTEREST 	NAME HAMZA RIAZ KHAN	ROLLNO CTCY-031
#include<stdio.h>
int main()
{
	float p,r,t;
	printf("Enter the principle value between 100 Rs. to 1,000,000 Rs. :");
	scanf("%f",&p);
	printf("Enter the rate of interest between 5%% to 10%% :");
	scanf("%f",&r);
	printf("Enter the time period between 1 to 10 years :");
	scanf("%f",&t);
	printf("The simple interest for the given values are %f",p*(r/100)*t);
	/*In this program we can restrict the values of variables by using control statement (if,elseif,else) but we are not using that
	because of we did not discuss this topic in our class*/
}
