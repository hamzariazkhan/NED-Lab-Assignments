#include<stdio.h>
int main ()
{
	printf("WE ARE OFFERING YOU A DISCOUNT ON YOUR PURCHASE BUT ON CERTAIN CONDITIONS\nIF YOUR PURCHASE IS GREATER THEN 1500 ON LUNCH THEN WE WILL GIVE YOU A 25%% DISCOUNT\nIF YOUR PURCHASE IS GREATER THEN 1500 ON DINNER WE WILL GIVE YOU A 20%% DISCOUNT");
	printf("IF YOU TAKE AWAY YOUR FOOD WE WILL GIVE YOU AN ADDITIONAL 10%% DISCOUNT ON LUNCH, 5%% DISCOUNT ON DINNER AND 15%% DISCOUNT ON MID NIGHT");
	printf("WE OFFER YOU ONE MORE HAAPY HOUR DEAL IN WHICH WE GIVE YOU 50%% DISCOUNT IF YOUR PURCHASE IS GREATER THAN 1500 AND LESS THEN 2500");
	printf("\n\n\nNOTE:\n\nWE WILL NOT OFFER YOU ANY DISCOUNT IF YOU PAY THE BILL FROM CREDIT OR DEBIT CARD");
	int cost;
	float per;
	char type,option,deal,method;
	printf("\nPlease enter your amount : ");
	scanf("%d",&cost);
	printf("\nPlease enter your payment method through Credit[I / i]/Debit Card[E / e] or Cash[C / c] : ");
	getchar ();
	scanf("%c",&method);
	printf("\nPlease enter your food type LUNCH[L / l]/DINNER[D / d]/MIDNIGHT[M / m] : ");
	getchar ();
	scanf("%c",&type);
	printf("\nPlease enter your food option Take In[T / t]/Take away[A / a] : ");
	getchar();
	scanf("%c",&option);
	if (cost > 1500 && cost <= 2500)
		{printf("\nDo you want a HAPPY HOUR DEAL [Y /y] or [N /n]");
		getchar();
		scanf("%c",&deal);
		if (deal == 'Y' || deal == 'y')
			per=(cost*50)/100;
			printf("\nYour total bill is: %f",per);
		if (deal == 'N' || deal == 'n')
			{printf("\nYou are not getting 50%% discount");
			printf("\nYour total bill is: %d",cost);}
		}
	else
		if (cost > 1500 && cost > 2500)
		{	if ((type == 'L' || type == 'l') && (option == 'T' || option == 't') && (method == 'C' || method == 'c') )
				{per=(cost*25)/100;
				printf("nYour total bill is : %f",per);}
			if ((type == 'L' || type == 'l') && (option == 'T' || option == 't') && (method == 'I' || method == 'i' || method == 'E' || method == 'e') )
				{printf("\nYour total bill is : %d",cost);}
			if ((type == 'L' || type == 'l') && (option == 'A' || option == 'a') && (method == 'C' || method == 'c') )
				{per=(cost*35)/100;
				printf("\nYour total bill is : %f",per);}
			if ((type == 'L' || type == 'l') && (option == 'A' || option == 'a') && (method == 'I' || method == 'i' || method == 'E' || method == 'e') )
				{printf("\nYour total bill is : %d",cost);}
				
				
			if ((type == 'D' || type == 'd') && (option == 'T' || option == 't') && (method == 'C' || method == 'c') )
				{per=(cost*20)/100;
				printf("\nYour total bill is : %f",per);}
			if ((type == 'D' || type == 'd') && (option == 'T' || option == 't') && (method == 'I' || method == 'i' || method == 'E' || method == 'e') )
				{printf("\nYour total bill is : %d",cost);}
			if ((type == 'D' || type == 'd') && (option == 'A' || option == 'a') && (method == 'C' || method == 'c') )
				{per=(cost*25)/100;
				printf("nYour total bill is : %f",per);}
			if ((type == 'D' || type == 'd') && (option == 'A' || option == 'a') && (method == 'I' || method == 'i' || method == 'E' || method == 'e') )
				{printf("\nYour total bill is : %d",cost);}
				
			
			if ((type == 'M' || type == 'm') && (option == 'T' || option == 't') && (method == 'C' || method == 'c') )
				{printf("\nYour total bill is : %d",cost);}
			if ((type == 'M' || type == 'm') && (option == 'T' || option == 't') && (method == 'I' || method == 'i' || method == 'E' || method == 'e') )
				{printf("\nYour total bill is : %d",cost);}
			if ((type == 'M' || type == 'm') && (option == 'A' || option == 'a') && (method == 'C' || method == 'c') )
				{per=(cost*15)/100;
				printf("\nYour total bill is : %f",per);}
			if ((type == 'M' || type == 'm') && (option == 'A' || option == 'a') && (method == 'I' || method == 'i' || method == 'E' || method == 'e') )
				{printf("\nYour total bill is : %d",cost);}
		}
		else
			{printf("\nEnter valid values");}
}
