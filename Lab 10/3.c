//PROGRAM TO WRITE THE NUMBER 	NAME HAMZA RIAZ KHAN 	ROLLNO CR-031
#include<stdio.h>
#include<string.h>
struct phone
{
	char area[5];
	char exc[5];
	char num[10];
	};
int main()
{
	struct phone p1,p2;
	strcpy(p1.area,"123");
	strcpy(p1.exc,"456");
	strcpy(p1.num,"789012");
	printf("Enter your Area Code : ");
	scanf("%s",&p2.area);
	printf("Enter your Exchange Code : ");
	scanf("%s",&p2.exc);
	printf("Enter your Number : ");
	scanf("%s",&p2.num);
	printf("My Number is : (%s) %s-%s",p1.area,p1.exc,p1.num);
	printf("\nYour Number is : (%s) %s-%s",p2.area,p2.exc,p2.num);
}
