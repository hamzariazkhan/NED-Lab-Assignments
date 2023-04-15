//TO IDENTIFY ANY CHARACTER 	NAME HAMZA RIAZ KHAN 	ROLL NO CTCY-031
#include<stdio.h>
int main ()
{
	char letter;
	printf("Enter any Alphabet / Number / Character : ");
	scanf("\n%c",& letter);
	if (letter >= 'a' && letter <= 'z')
		printf("Your given value is small alphabet");
	else if (letter >= 'A' && letter <= 'Z')
		printf("Your given value is capital alphabet");
	else if (letter >=9 && letter <=0)
		{printf("Your given value is any number");}
	else
		printf("Your given value is any special character");
}
