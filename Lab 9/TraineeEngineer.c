void getdata(int marks,int exp)
{
	printf("Enter Your Marks : ");
	scanf("%d",&marks);
	printf("Enter Your Expierience : ");
	scanf("%d",&exp);
	if (marks>=70 && exp>=2)
	{
		printf("You Are Seleceted as ASSOSIATE DEVELOPER");
	}
	else if(marks>=60 && exp>=1)
	{
		printf("You Are Seleceted as ASSISTANT DEVELOPER");
	}
	else if(marks>=50 && marks<60 && exp>=0)
	{
		printf("You Are Seleceted as TRAINEE ENGINEER");
	}
	else
	{
		printf("Your Not Eligilble");
	}
}
#include<stdio.h>
int main ()
{
	int marks,exp;
	getdata(marks,exp);
}