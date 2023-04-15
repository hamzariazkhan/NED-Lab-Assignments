//PROGRAM TO MAKE SPECIAL PURPOSE CALCULATOR 	NAME HAMZA RIAZ KHAN 	ROLLNO CR-031
#include<stdio.h>
struct data     
{
	float operand1;
	char op;
	float operand2;
};
float basic(float x,float y,char c);
void display(struct data a[], int n);
double dot(double a[],double b[],int n);
int main()
{
	char ch;
	printf("Do you want to solve an equation (press a) or a dot product (press b)? ");
	scanf("%c",&ch);
	printf("\n\n");
	if(ch=='a'||ch=='A')
	{
		do
		{
			int n=0,i=0,j=0;
			printf("How many operands are there in the equation: ");
			scanf("%d",&n);
			struct data a[n];
			for(i=0,j=2;i<n-1;i++,j++)
			{
				if(i==0)
				{
					printf("Enter operand %d: ",i+1);
					scanf("%f",&a[i].operand1);
					printf("Choose operator(+,-,*,/): ");
					scanf("\n%c",&a[i].op);
					printf("Enter operand %d: ",i+2);
					scanf("%f",&a[i].operand2);
					if(a[i].op=='/'&&a[i].operand2==0)
					{
						printf("Invalid. Any number divided by zero is infinity.");
						break;
					}
					else if(!(a[i].op=='+'||a[i].op=='-'||a[i].op=='*'||a[i].op=='/'))
					{
						printf("Invalid input");
						break;
					}
					a[i+1].operand1=basic(a[i].operand1,a[i].operand2,a[i].op);
				}
				else
				{
					printf("Choose operator(+,-,*,/): ");
					scanf("\n%c",&a[i].op);
					printf("Enter  operand %d: ",j);
					scanf("%f",&a[i].operand2);
					if(a[i].op=='/'&&a[i].operand2==(float)0)
					{
						printf("Invalid. Any number divided by zero is infinity.");
						break;
					}
					a[i+1].operand1=basic(a[i].operand1,a[i].operand2,a[i].op);
				}
			}
			if(i==n-1)
				display(a,n);
			printf("\nDo you want to solve another equation? Press y for yes! ");
			scanf("\n%c",&ch);
		}while(ch=='y'||ch=='Y');
	}
	else if(ch=='b'||ch=='B')
	{
		do
		{
			int n;
			printf("Enter size of array: ");
			scanf("%d",&n);
			double a[n],b[n];
			int i;
			for(i=0;i<n;i++)
			{
				printf("Enter the value for A[%d] and B[%d]: ",i,i);
				scanf("%lf %lf",&a[i],&b[i]);
			}
			printf("A . B = %f\n",dot(a,b,n));
			printf("Do you want to perform another dot product. Press y for yes! ");
			scanf("\n%c",&ch);
		}while(ch=='y'||ch=='Y');
	}
	return 0;
}
float basic(float x,float y,char c)
{
	if(c=='+')
	{
		return x+y;
	}
	else if(c=='-')
	{
		return x-y;
	}
	else if(c=='*')
	{
		return x*y;
	}
	else if(c=='/')
	{
		return x/y;
	}
}
void display(struct data a[], int n)
{
	printf("Call to display function: You have solved the following equation.\n");
	printf("%.2f ",a[0].operand1);
	int i;
	for(i=0;i<n-1;i++)
	{
		printf("%c %.2f ",a[i].op,a[i].operand2);
	}
	printf("= %.2f",a[i].operand1);
	return;
}
double dot(double a[],double b[],int n)
{
	double ans=0;
	int i;
	for(i=0;i<n;i++)
	{
		ans=ans+a[i]*b[i];
	}
	return ans;
}
