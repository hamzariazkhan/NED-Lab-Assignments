//PROGRAM TO FIND THE ADDITION OF COMPLEX NUMBERS 	NAME HAMZA RIAZ KHAN 	ROLLNO CR-031
#include<stdio.h>
struct complex
{
	float real;
	float img;
	
};
void add(float a,float b,float c, float d)
{
	float REAL=a+b,IMG=c+d;
	if(IMG>0)
		printf("\n\n\nADDITION OF TWO COMPLEX NUMBERS : %.2f+%.2fi",REAL,IMG);
	else
		printf("\n\n\nADDITION OF TWO COMPLEX NUMBERS :  %.2f%.2fi",REAL,IMG);
}
void multiply(float a,float b,float c,float d)
{
	float REAL=a*c-b*d,IMG=a*d+b*c;
	if(IMG>0)
		printf("\nPRODUCT OF TWO COMPLEX NUMBERS : %.2f+%.2fi",REAL,IMG);
	else
		printf("\nPRODUCT OF TWO COMPLEX NUMBERS : %.2f%.2fi",REAL,IMG);
}

int main()
{
	struct complex com[2];
	printf("--------------------------\nENTER FIRST COMPLEX NUMBER\n--------------------------\nEnter real part : ");
	scanf("%f",&com[0].real);
	printf("Enter imaginery part : ");
	scanf("%f",&com[0].img);
	printf("\n\n---------------------------\nENTER SECOND COMPLEX NUMBER\n---------------------------\nEnter real part : ");
	scanf("%f",&com[1].real);
	printf("Enter imaginery part : ");
	scanf("%f",&com[1].img);
	
	if(com[0].img>0)
		printf("\n\nFIRST COMPLEX NUMBER IS : %.2f+%.2fi",com[0].real,com[0].img);
	else
		printf("\n\nFIRST COMPLEX NUMBER IS : %.2f%.2fi",com[0].real,com[0].img);
	
	if(com[1].img>0)
		printf("\nSECOND COMPLEX NUMBER IS : %.2f+%.2fi",com[1].real,com[1].img);
	else
		printf("\nSECOND COMPLEX NUMBER IS : %.2f%.2fi",com[1].real,com[1].img);
		
	add(com[0].real,com[1].real,com[0].img,com[1].img);
	multiply(com[0].real,com[0].img,com[1].real,com[1].img);
	
	return 0;
}
