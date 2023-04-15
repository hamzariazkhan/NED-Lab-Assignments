#include<stdio.h>
int main ()
{
	int num,sum=0,i=2,d=0,e,last,num1;
	printf("Enter any five digits number : ");
	scanf("%d",&num);
	num1=num;
	e=num;
	if(num>99999)
		{
			printf("You enter the wrong values\n");
		}
	
	while(num!=0)
		{
			sum+=num%10;
			num=num/10;
		}
		printf("The sum of given number is : %d",sum);
	if(sum%2==0)
		{
			printf("Your Number is Even number : %d",sum);
			while(num1 % i!=0)
			{
				i++;
			}
			if(num1==i)
			{
				printf("\nYour given number is Prime Number");
			}
		}
	else if (sum%2!=0)
	{
		printf("\nYour given number is not a Prime Number");
	}
	
	if(sum%2!=0)
	{
		while(e!=0)
		{
			last=e%10;
			d=d*10+last;
			e=e/10;
		}
		if (num==d)
			{printf("\nYour given number is Palindrome");}
		else
			{printf("Your given number is not a Palindrome");}
	}
}
