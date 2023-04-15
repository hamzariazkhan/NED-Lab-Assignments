//PROGRAM TO CALCULATE PERCENTAGE OF CALORIES 	NAME HAMZA RIAZ KHAN 	ROLLNO CTCY-031
#include<stdio.h>
int main ()
{
	float calories, fats, percentage, calfat;
	printf("Enter your number of calories : ");
	scanf("%f",&calories);
	printf("Enter your fat grams : ");
	scanf("%f",&fats);
	calfat = fats * 9;
	percentage = (calfat/calories) * 100;
	if ( calories <= 0 || fats <= 0 || calfat > calories)  
	printf("\nYou have enter invalid calories or fats");
	else
		if (calfat <= (30 / 100) * calories)
			printf("\nThe food is low in fat");
		else
			printf("\nThe food is perfect in fat\nThe percentage of calories in your food is : %f",percentage);
	
}
