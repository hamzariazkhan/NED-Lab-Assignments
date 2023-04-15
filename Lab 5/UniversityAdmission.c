#include<stdio.h>
int main ()
{
	float nts,fsc,ntsobt,fscobt,ntsper,fscper;
	printf("Enter your NTS Obtained Marks : ");
	scanf("%f",&ntsobt);
	printf("Enter your NTS Max Marks : ");
	scanf("%f",&nts);
	printf("Enter your FSC Obtained Marks : ");
	scanf("%f",&fscobt);
	printf("Enter your FSC Max Marks : ");
	scanf("%f",&fsc);
	ntsper=(ntsobt/nts)*100;
	fscper=(fscobt/fsc)*100;
	if (fscper > 70 && ntsper >= 70)
		printf("You can get Admission in IT in OXFORD");
	else if (fscper > 70 && ntsper >= 60 && ntsper <= 70)
		printf("You can get Admission in Eletronics in OXFORD");
	else if (fscper > 70 && ntsper >= 50 && ntsper <= 60)
		printf("You can get Admission in Telecommunication in OXFORD");
	else if (fscper >= 60 && fscper <= 70 && ntsper >= 50)
		printf("You can get Admission in IT in MIT");
	else if (fscper >= 50 && fscper <= 59 && ntsper > 50)
		printf("You can get Admission in Chemical in MIT");
	else
		printf("You can get Admission in Computer in MIT");
}
