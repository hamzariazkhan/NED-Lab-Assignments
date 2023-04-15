//PROGRAM TO MAKE A DIGITAL CLOCK 	NAME HAMZA RIAZ KHAN 	ROLLNO 	CR-031
#include<stdio.h>
#include<windows.h>
int main ()
{
	int small,large,largest,d=10000;
	printf("Enter Small Needle (hours) : ");
	scanf("%d",&small);
	printf("Enter Large Needle (seconds) : ");
	scanf("%d",&large);
	printf("Enter Largest Needle (minutes) : ");
	scanf("%d",&largest);
	if (small > 12 || large > 60 || largest > 60)
		{printf("Enter valid time format");}
	else
	
	while(1)
		{
			large++;
			if (large > 59){
				large=0;
				largest++;}
			if (largest > 59){
				largest=0;
				small++;}
			if (small > 12){
				small=1;}
			printf("\nDigital Clock");
			printf("\n%02d : %02d : %02d",small,largest,large);
			sleep(1);}
	}
	

