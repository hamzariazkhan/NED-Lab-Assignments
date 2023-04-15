//PROGRAM TO CHECK THE RESULTS OF TEST 	NAME HAMZA RIAZ KHAN 	ROLLNO CR-031
#include <stdio.h>
#include <stdlib.h>
#define maxque 100
#define maxstd 100

int main() 
{
    int q, s;
    printf("Enter number of questions: ");
    scanf("%d", &q);
    printf("Enter number of students: ");
    scanf("%d", &s);

    char answers[maxque];
    printf("Enter correct answers: ");
    scanf("%s", answers);

    char stdans[maxstd][maxque];
    char stdid[maxstd][11];
    int counts[maxstd];
    int i;
    for (i = 0; i < s; i++) 
	{
        printf("Enter student ID and answers: ");
        scanf("%s %s", stdid[i], stdans[i]);
        int count = 0;
        int j;
        for (j = 0; j < q; j++) 
		{
            if (stdans[i][j] == answers[j]) 
			{
                count += 2;
            } 
			else if (stdans[i][j] != ' ') 
			{
                count--;
            }
        }
        counts[i] = count;
    }

    printf("ID\tANSWERS\t\tMARKS\tGRADE\n");
    for (i = 0; i < s; i++) 
	{
        char grade;
        float percentage = (float) (counts[i] * 100)/ (q * 2);
        if (percentage >= 90) 
		{
            grade = 'A';
        } 
		else if (percentage >= 80) 
		{
            grade = 'B';
        } 
		else if (percentage >= 70) 
		{
            grade = 'C';
        }
		else if (percentage >= 60) 
		{
            grade = 'D';
        }
		else 
		{
            grade = 'F';
        }
        printf("%s\t%s\t%d\t%c\n", stdid[i], stdans[i], counts[i], grade);
    }
    return 0;
}

