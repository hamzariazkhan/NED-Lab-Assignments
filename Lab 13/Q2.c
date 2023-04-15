// NAME HAMZA RIAZ KHAN 	ROLL NO CR-031
#include <stdio.h>
#include <stdlib.h>
int i, j;
struct Student
{
  int id;
  char name[20];
  char sex;
  int quizzes[2];
  int midterm;
  int final;
  int total;
}students[20];

void getdata()
{
	FILE *file;
      file = fopen("d:\\class_records.txt", "w");

      if (file == NULL)
      {
        printf("Error opening file!\n");
        exit(1);
      }

      for ( i = 0; i < 20; i++)
      {
        printf("\nEnter student %d information:\n", i + 1);

        printf("ID: ");
        scanf("%d", &students[i].id);

        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);

        printf("Sex: ");
        char sex;
        scanf(" %c", &sex);

        students[i].sex = sex;

        for ( j = 0; j < 2; j++)
        {
          printf("Quiz %d score: ", j + 1);
          int quiz;
          scanf("%d", &quiz);

          students[i].quizzes[j] = quiz;
        }

        printf("Midterm score: ");
        int midterm;
        scanf("%d", &midterm);

        students[i].midterm = midterm;

        printf("Final score: ");
        int final;
        scanf("%d", &final);

        students[i].final = final;

        students[i].total = students[i].quizzes[0] + students[i].quizzes[1] + students[i].midterm + students[i].final;

        fprintf(file, "%d,%s,%c,%d,%d,%d,%d\n", students[i].id, students[i].name, students[i].sex, students[i].quizzes[0], students[i].quizzes[1], students[i].midterm, students[i].final, students[i].total);
      }

      int numOfStudents = 20;

      fclose(file);
      
}

int main()
{
	int lt50 = 0;
    int lt80 = 0;
    int lt100 = 0;

  int numOfStudents = 0;
  int choice;

  while (choice != 4)
  {
    printf("1. Input student records\n");
    printf("2. Print student records\n");
    printf("3. Print statistics\n");
    printf("4. Exit\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    printf("\n");

    switch (choice)
    {
    case 1:
      getdata();
	  break;

    case 2:
      for ( i = 0; i < numOfStudents; i++)
      {
        printf("ID: %d\n", students[i].id);
        printf("Name: %s\n", students[i].name);
        printf("Sex: %c\n", students[i].sex);

        for ( j = 0; j < 2; j++)
        {
          printf("Quiz %d score: %d\n", j + 1, students[i].quizzes[j]);
        }

        printf("Midterm score: %d\n", students[i].midterm);
        printf("Final score: %d\n", students[i].final);
        printf("Total score: %d\n\n", students[i].total);
      }
      break;

    case 3:
      
      for ( i = 0; i < numOfStudents; i++)
      {
        if (students[i].total <= 50 && students[i].total >= 0)
          lt50++;
        if (students[i].total <= 80 && students[i].total > 50)
          lt80++;
        if (students[i].total <= 100 && students[i].total > 80)
          lt100++;
      }

      printf("\n%d students total score < 50\n", lt50);
      printf("\n%d students total score < 80\n", lt80);
      printf("\n%d students total score < 100\n", lt100);
      break;

    case 4:
      return 0;
      break;

    default:
      printf("Invalid choice!");
      break;
    }
  }
  return 0;
}

