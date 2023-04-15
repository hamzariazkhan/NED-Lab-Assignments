// NAME HAMZA RIAZ KHAN 	ROLL NO CR-031
#include<stdio.h>
 void swaped(int *aptr,int *bptr,int *cptr)
 {
 	int temp=*aptr;
 	*aptr=*bptr;
 	*bptr=*cptr;
 	*cptr=temp;
 }
int main()
{
	int a,b,c;
	printf("Enter a : ");
	scanf("%d",&a);
	printf("Enter b : ");
	scanf("%d",&b);
	printf("Enter c : ");
	scanf("%d",&c);
	swaped(&a,&b,&c);
	printf("\n\nAFTER SWAPING\n\na = %d\nb = %d\nc = %d",a,b,c);
	return 0;
}
