//PROGRAM TO SHOW THE HIGHEST MARKS OF THE STUDENTS 	NAME HAMZA RIAZ KHAN 	ROLLNO CR-031
#include<stdio.h>
struct courses
{
	char c[3][20];
	float GPA[3];
};
struct address
{
	char street[20];
	char city[20];
	char zip[20];
	char state[20];
};
struct student
{
	float CGPA;
	struct courses cc;
	struct address add;	
};

int main()
{
	struct student s[2];
	printf("ENTER NAME OF COURSE 1 : ");
	gets(s[0].cc.c[0]);
	printf("ENTER NAME OF COURSE 2 : ");
	gets(s[0].cc.c[1]);
	printf("ENTER NAME OF COURSE 3 : ");
	gets(s[0].cc.c[2]);

	
	printf("\n\n------------\nSTUDENT # 01\n------------\n");
	printf("Enter GPA of first course : ");
	scanf("%f",&s[0].cc.GPA[0]);
	printf("Enter GPA of second course : ");
	scanf("%f",&s[0].cc.GPA[1]);
	printf("Enter GPA of third course : ");
	scanf("%f",&s[0].cc.GPA[2]);
	s[0].CGPA=(s[0].cc.GPA[0]+s[0].cc.GPA[1]+s[0].cc.GPA[2])/3;
	printf("\nEnter your street address : ");
	gets(s[0].add.street);
	gets(s[0].add.street);
	printf("Enter your city : ");
	gets(s[0].add.city);
	printf("Enter your zip code : ");
	gets(s[0].add.zip);
	printf("Enter your state : ");
	gets(s[0].add.state);
	
	printf("\n\n------------\nSTUDENT # 02\n------------\n");
	printf("Enter GPA of first course : ");
	scanf("%f",&s[1].cc.GPA[0]);
	printf("Enter GPA of second course : ");
	scanf("%f",&s[1].cc.GPA[1]);
	printf("Enter GPA of third course : ");
	scanf("%f",&s[1].cc.GPA[2]);
	s[1].CGPA=(s[1].cc.GPA[0]+s[1].cc.GPA[1]+s[1].cc.GPA[2])/3;
	printf("\nEnter your street address : ");
	gets(s[0].add.street);
	gets(s[1].add.street);
	printf("Enter your city : ");
	gets(s[1].add.city);
	printf("Enter your zip code : ");
	gets(s[1].add.zip);
	printf("Enter your state : ");
	gets(s[1].add.state);
	
	if(s[0].cc.GPA[0]>s[1].cc.GPA[0])
		printf("\n\nSTUDENT 01 has highest GPA in %s",s[0].cc.c[0]);
	else if(s[0].cc.GPA[0]==s[1].cc.GPA[0])
		printf("\n\nBoth students have same GPA in %s",s[0].cc.c[0]);
	else
		printf("\n\nSTUDENT 02 has highest GPA in %s",s[0].cc.c[0]);
		
	if(s[0].cc.GPA[1]>s[1].cc.GPA[1])
		printf("\nSTUDENT 01 has highest GPA in %s",s[0].cc.c[1]);
	else if(s[0].cc.GPA[1]==s[1].cc.GPA[1])
		printf("\nBoth students have same GPA in %s",s[0].cc.c[1]);
	else
		printf("\nSTUDENT 02 has highest GPA in %s",s[0].cc.c[1]);
		
	if(s[0].cc.GPA[2]>s[1].cc.GPA[2])
		printf("\nSTUDENT 01 has highest GPA in %s",s[0].cc.c[2]);
	else if(s[0].cc.GPA[2]==s[1].cc.GPA[2])
		printf("\nBoth students have same GPA in %s",s[0].cc.c[2]);
	else
		printf("\nSTUDENT 02 has highest GPA in %s",s[0].cc.c[2]);
		
	if(s[0].CGPA>s[1].CGPA)
		printf("\n\nSTUDENT 01 HAS HIGHEST CGPA\n");
	else if(s[0].CGPA==s[1].CGPA)
		printf("\n\nBOTH STUDENTS HAVE SAME CGPA\n");
	else
		printf("\n\nSTUDENT 02 HAS HIGHEST CGPA\n");
	
	return 0;
}
