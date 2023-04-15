#include<stdio.h>
int main ()
{
	int fnum,snum,nnum,sumnum=1;
	printf("Enter your first number : ");
	scanf("%d",&fnum);
	printf("Enter your second number : ");
	scanf("%d",&snum);
	do{
		nnum=fnum+snum;
		if(nnum<1000)
		{printf("%d\t",nnum);}
		if(nnum%3==0 || nnum%5==0 || nnum%7==0)
		{sumnum=sumnum+nnum;}
		
		fnum=snum;
		snum=nnum;
	}
	while(nnum<=1000);
	printf("\nThe sum of divisible by 3,5 and 7 = %d",sumnum);
}
