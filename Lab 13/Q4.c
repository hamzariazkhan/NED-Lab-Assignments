// NAME HAMZA RIAZ KHAN 	ROLL NO CR-031
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fptr;
    float a, b, c;
    float sum1 = 0, sum2 = 0, sum3 = 0;
    fptr = fopen("budget.txt", "w");
    if (fptr == NULL)
    {
        printf("Error! opening file\n");
        exit(1);
    }
    fprintf(fptr, "-462.13\t486.47\t973.79\n");
    fprintf(fptr, "755.42\t843.04\t-963.67\n");
    fprintf(fptr, "442.58\t-843.02\t-462.86\n");
    fprintf(fptr, "-233.93\t-821.67\t399.59\n");
    fprintf(fptr, "-379.65\t-556.37\t837.46\n");
    fprintf(fptr, "55.18\t-144.93\t-93.15\n");
    fprintf(fptr, "533.73\t804.64\t-66.25\n");
    fprintf(fptr, "-922.12\t914.68\t-264.67\n");
    fprintf(fptr, "-600.27\t-838.59\t747.02\n");
    fprintf(fptr, "-962.97\t49.96\t-677.79\n");
    fclose(fptr);
    fptr = fopen("budget.txt", "r");
    while (fscanf(fptr, "%f\t%f\t%f\n", &a, &b, &c) != EOF)
    {
        sum1 += a;
        sum2 += b;
        sum3 += c;
    }
    fclose(ptr);
    printf("Column sums are: %.2f %.2f %.2f \n", sum1, sum2, sum3);
    return 0;
}

