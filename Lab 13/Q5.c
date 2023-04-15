// NAME HAMZA RIAZ KHAN 	ROLL NO CR-031
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    fptr = fopen("count.txt", "w");
    if (fptr == NULL)
    {
        printf("Error! \n");
        exit(1);
    }
    char str[1000];
    printf("Write a paragraph: ");
    scanf(" %[^\n]s", str);
    fprintf(fptr, "%s", str);
    fclose(fptr);
    fptr = fopen("count.txt", "r");
    if (fptr == NULL)
    {
        printf("Error! \n");
        exit(1);
    }
    char ch;
    int alphaCount = 0, digCount = 0, spaceCount = 0;
    while ((ch = fgetc(fptr)) != EOF)
    {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            alphaCount++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digCount++;
        }
        else if (ch == ' ')
        {
            spaceCount++;
        }
    }
    printf("Number of alphabets in text: %d \n", alphaCount);
    printf("Number of digits in text: %d \n", digCount);
    printf("Number of spaces in text: %d \n", spaceCount);
    fclose(fptr);
    return 0;
}

