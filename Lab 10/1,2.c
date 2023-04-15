//PROGRAM TO PRINT THE INFORMATION 	NAME HAMZA RIAZ KHAN 	ROLLNO CR-031
#include<stdio.h>
struct employee
{
	char employeeid[50];
	char name[50];
	char salary[50];
	char department[50];
};
	int main()
{
	struct employee emp1;
	printf("Enter your Name : ");
	scanf("%s",&emp1.name);
	printf("Enter your id : ");
	scanf("%s",&emp1.employeeid);
	printf("Enter your Department : ");
	scanf("%s",&emp1.department);
	printf("Enter your Salary : ");
	scanf("%s",&emp1.salary);
	
	
	printf("\nName : %s",emp1.name);
	printf("\nid : %s",emp1.employeeid);
	printf("\nDepartment : %s",emp1.department);
	printf("\nSalary : %s",emp1.salary);
}
