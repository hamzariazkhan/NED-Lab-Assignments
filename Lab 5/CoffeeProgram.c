#include<stdio.h>
int main ()
{
	char coftype,cofsize;
	printf("Enter a Coffee Type which you want\nPress [B / b] for Black Coffee and [W / w] for White Coffee : ");
	scanf("%c",& coftype);
	getchar ();
	printf("Enter your Coffee Size which you want\nPress [L / l] for Large Cup and [S / s] for Small Cup : ");
	scanf("%c",& cofsize);
	switch (coftype)
	{
		case 'W':
		case 'w':
			switch (cofsize)
			{
				case 'L':
				case 'l':
					printf("You order White Coffee (Large Cup).\nYou will wait your order is being process.");
					printf("\nPutting Water Time : 15 mins\nPutting Sugar time : 15 mins\nMixxing Time : 20 mins\nAdding Coffee Time : 2 mins\nAdding Milk Time : 4 mins\nMixing Time : 20 min");
					printf("\nYour Total Time is : 114 mins");
					break;
				default:	
					case 'S':
					case 's':
						printf("You order White Coffee (Small Cup).\nYou will wait your order is being process.");
						printf("\nPutting Water Time : 15 mins\nPutting Sugar time : 15 mins\nMixxing Time : 20 mins\nAdding Coffee Time : 2 mins\nAdding Milk Time : 4 mins\nMixing Time : 20 min");
						printf("\nYour Total Time is : 76 mins");
						break;
			}
		case 'B':
		case 'b':
			switch (cofsize)
			{
				case 'L':
				case 'l':
					printf("You order Black Coffee (Large Cup).\nYou will wait your order is being process.");
					printf("\nPutting Water Time : 20 mins\nPutting Sugar time : 20 mins\nMixxing Time : 25 mins\nAdding Coffee Time : 15 mins\nMixing Time : 25 min");
					printf("\nYour Total Time is : 157.5 mins");
					break;
				default:
					case 'S':
					case 's':
						printf("You order Black Coffee (Small Cup).\nYou will wait your order is being process.");
						printf("\nPutting Water Time : 20 mins\nPutting Sugar time : 20 mins\nMixxing Time : 25 mins\nAdding Coffee Time : 15 mins\nMixing Time : 25 min");
						printf("\nYour Total Time is : 105 mins");
						break;
			}
		default:
			printf("Please enter a valid choices.");	
	}
}
