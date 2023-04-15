#include<stdio.h>
int main ()
{
	char a;
	printf("Are you sure to delete [Y / y] or [N / n] : ");
	scanf("%c",& a);
	switch (a)
	{
	case 'Y':
	case 'y':
		printf("Deleted Successfully");
		break;
	case 'N':
	case 'n':
		printf("Delete Cancelled");
		break;
	default:
		printf("Enter a right option");
	}
}
