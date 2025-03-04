#include <stdio.h>
void main()
{
	// Declare and intialize two variables   x and y that store values 4 and 'c'
	int x = 4;
	char y = 'c';
	int a;
	    
	int marks;
	
	printf("Enter Marks:");
	
 	//input from user
	scanf("%d", &marks);
	
	if(marks > 40)
	{
		    printf("Pass");
	}
	else
	{
		printf("Fail");
	}            
	
	// Square of positive number using if n*n 
	
	int n;
	printf("\n\nEnter a positive number: ");
	scanf("%d", &n);
	if(n > 0)
	{
	 	 printf("Square of the number %d, is : %d", n, n*n);
	}
	else
	{
		 printf("Invalid number");
	}	
				   
//	printf("characters: %c \n", y);

//	printf("Enter a number:");
	/*
	// Scanf is used o take input from user
	scanf("%d", &a);
	printf("The number you entered is: %d", a);
	*/
}