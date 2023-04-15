//PROGRAM TO CALCULTE AVERAGE SPEED 		NAME HAMZA RIAZ KHAN	ROLLNO CTCY-031
#include<stdio.h>
int main()
{
	float d1,d2,d3,d4,d5,d,t;
	printf("Enter the time in hours from 1 to 5 travelled by the car :");/*for this we have to choose only 5 hours because if we choose other value 
	from 1 to 5 then we use control statement which is not discussed in our class*/
	scanf("%f",&t);
	printf("Enter the distance in meter the car travelled for 1st hour :");
	scanf("%f",&d1);
	printf("Enter the distance in meter the car travelled for 2nd hour :");
	scanf("%f",&d2);
	printf("Enter the distance in meter the car travelled for 3rd hour :");
	scanf("%f",&d3);
	printf("Enter the distance in meter the car travelled for 4th hour :");
	scanf("%f",&d4);
	printf("Enter the distance meter the car travelled for 5th hour :");
	scanf("%f",&d5);
	d=(d1+d2+d3+d4+d5)/5;
	printf("\n\n\n\nThe total distance travelled by car is %f",(d1+d2+d3+d4+d5));
	printf("\nThe average speed of car in miles per hour is %f:",(d/1609)/t);
	
}
