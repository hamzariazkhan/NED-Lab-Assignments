//PROGRAM TO FIND THE MAXIMUM CHARACTER 	NAME HAMZA RIAZ KHAN 	ROLLNO CR-031
#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],z[1000];  
    int  a[1000],i,j,k=0,count=0,n,x,y;
 	printf("Enter Your Name : ");
 	gets(s);
 	printf("\nEnter your Total Courses : ");
 	scanf("%d",&y);
 	for(x=0;x<y;x++)
 	{
 		printf("Enter Your Courses Name : ");
 		scanf("%s",&z[x]);
	 }
     strcat(s,z);
    for(j=0;s[j];j++);
	   n=j; 
    
    for(i=0;i<n;i++)  
    {
    	a[i]=0;
    	count=1;
    	if(s[i])
    	{
		
 		  for(j=i+1;j<n;j++)  
	      {   
	    	
	        if(s[i]==s[j])
    	    {
                 count++;
                 s[j]='\0';
	     	}
	      }  
       }
	   a[i]=count;
	   if(count>=k)
	     k=count;
	   
	   
 	}
 	printf("Maximum occuring characters ");
 	for(j=0;j<n;j++)  
	    {
	    	
	        if(a[j]==k)
    	    {
	             printf(" '%c',",s[j]);
	     	}
	   }  
     
	printf("\b=%d times \n ",k);
 
 	 
     
    return 0;
}
