//PROGRAM TO COMPARE THE TWO STRINGS 	NAME HAMZA RIAZ KHAN 	ROLLNO CR-031
#include<stdio.h>
#include<string.h>
int main ()
{
    int a;
    char s1[50],s2[50];
    printf("Enter your first String : ");
    gets(s1);
    printf("\nEnter your second String : ");
    gets(s2);
    if (strcmp(s1,s2)==0)
    {
        printf("\nStrings are equal");
    }
     else if(strcmp(s1,s2)<0)
     {
         printf("String %s are greater than %s",s1,s2);
     }
    else
    printf("String %s is smaller than %s",s1,s2);
}
