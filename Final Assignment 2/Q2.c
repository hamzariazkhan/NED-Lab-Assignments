//PROGRAM TO SORT THE DATA ACCORDING TO THE MARKS,ROLLNO AND NAME 	NAME HAMZA RIAZ KHAN 	ROLLNO CR-031
#include<stdio.h>  
#include<string.h>
typedef struct student
{ 
    int roll;
    char name[10];
    float marks;
}
record;
void sort_marks(record array[],int n)
{  
	int i,j;
	record temp;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n-i-1;j++)
		{
			if (array[j].marks<array[j+1].marks)
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
}
void searchbyroll_no(record array[],int n,int roll)
{  
	int i;
	for (i=0;i<n;i++)
	{
		if (array[i].roll == roll)
		{
			printf("\nRoll No : %d\nName : %s\nMarks : %.1f\n", array[i].roll, array[i].name, array[i].marks);
			return;
		}
	}
	printf("Record not found.\n");
}
void searching_name(record array[],int n,char name[])
{
	int i;
	for (i=0;i<n;i++)
	{
		if (strcmp(array[i].name,name)==0)
		{
			printf("\nRoll No : %d\nName : %s\nMarks : %.1f\n", array[i].roll,array[i].name,array[i].marks);
			return;
		}
	}
	printf("Record not found.\n");
}
int main()
{
	record data[] = { {1001,"Salman",75.5},
                       {1002,"Zubair",80},
                       {1004,"Ahsan",64},
                       {1005,"Farah",78},
                       {1007,"Hassan",65},
                       {1008,"Kamran",54},
                       {1009,"Mariyum",60} };
   
    sort_marks(data,7);
    printf("\nSORTED RECORDS ACCORDING TO MARKS.\n\n");
    printf("| \tROLL.NO\t  | \tNAME\t  | \tMARKS\t  |\n");
    int i;
    for (i=0;i<7;i++)
    {
    	printf("| \t%d\t  | \t%s\t  | \t%.1f\t  |\n", data[i].roll, data[i].name, data[i].marks);
	}
	int roll;
	printf("\nEnter Roll No. you want to search = ");
	scanf("%d",&roll);
	searchbyroll_no(data,7,roll);
	//searching student record  wth of name
	char name[10];
	printf("\nEnter Name ,you want to search = ");
	scanf("%s",&name);
	searching_name(data,7,name);
	
    return 0;
}
