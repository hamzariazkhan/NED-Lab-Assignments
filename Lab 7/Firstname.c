#include<stdio.h>
int main ()
{
	int i=0,j=0,count=1;
	char first[100],last[100],full[100];
	printf("Enter your First Name : ");
	scanf("%s",&first);
	printf("Enter your Last Name : ");
	scanf("%s",&last);
	while(first[i]!='\0')
	{
		full[j]=first[i];
		i++;
		j++;
		if (first[i]!='\0')
		{
			count=count+1;
		}
	}
	i=0;
		while(last[i]!='\0')
	{
		full[j]=last[i];
		i++;
		j++;
		if (first[i]!='\0')
		{
			count=count+1;
		}
	}
	full[j]='\0';
	printf("\n\n\nYour First Name is : %s",first);
	printf("\nYour Last Name is : %s",last);
	printf("\nYour Full Name is : %s",full);
	printf("\nYour total character is : %d",count);
}
