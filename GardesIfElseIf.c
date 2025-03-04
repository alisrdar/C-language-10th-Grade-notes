#include <stdio.h>
void main()
{                          50 
	int marks;
	printf("enter marks: ");
	scanf("%d",&marks);
	
	if(marks >= 80 && marks <= 100 )
	{
	 	printf("\nGrade A");	
	}
	else if(marks >= 70 && marks < 80)
 	{
  	 	 printf("\nGrade B");
    }
    else if(marks >=60 && marks <70)
    { 
	printf("\nGrade C") ;
    }
    else if(marks >=50 && marks <60)
    {
    	printf("\nGrade D");
	}
 	else if(marks <50){
	    printf("\n Grade F");  	
	}
	else {
		printf("invalid Marks");
	}
    
   	
	
}