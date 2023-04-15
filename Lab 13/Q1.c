//NAME HAMZA RIAZ KHAN 	ROLLNO CR-031
#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fptr;
	char str[100];
	int key = 2, i;
	
	fptr = fopen("d:\\program.txt", "w");
	printf("Enter the text : ");
	gets(str);
	
	fprintf(fptr,"%s",str);
	
	printf("         text: %s\n", str);
	
	for(i=0; str[i]; i++)
	{
		if(str[i] == ' ')
		continue;
		else if(str[i] >= 'a' && str[i] <='z')
		{
			if(str[i]+key > 'z')
		    str[i] += key-26;
			
			else
			str[i] += key; 	
		}
		
		else if(str[i] >= 'A' && str[i] <='Z')
		{
			if(str[i]+key > 'Z')
		    str[i] += key-26;
			
			else
			str[i] += key; 	
		} 	
	}
	
	fprintf(fptr,"%s", str);
	
	if((fptr = fopen("d:\\program.txt", "r+")) == NULL)
	{
		printf("Error! file does not exist: ");
		exit(0);
	}
	
	fscanf(fptr, "%s",&str);
	printf("Encrypted text : %s\n", str);
	int keyD;
	printf("\nPress key = 3 to decrypt : ");
	scanf("%d", &keyD);
	
	if(keyD = key){
	for(i=0; str[i]; i++)
	{
		if(str[i] == ' ')
		continue;
		else if(str[i] >= 'a' && str[i] <='z')
		{
			if(str[i]+key > 'z')
		    str[i] += key-26;
			
			else
			str[i] -= key; 	
		}
		
		else if(str[i] >= 'A' && str[i] <='Z')
		{
			if(str[i]+key > 'Z')
		    str[i] += key-26;
			
			else
			str[i] -= key; 	
		} 	
	}
	printf("\nDecrypted text : %s\n", str);
}
else
{
	printf("Wrong key pressed. ");
}
	
	fclose(fptr);
   return 0;
}

