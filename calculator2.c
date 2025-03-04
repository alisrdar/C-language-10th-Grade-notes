#include <stdio.h>
void main()
{
	int a,b;
	int opr;
	printf ("enter a number: ");   
	scanf("%d", &a);
	printf ("enter another number: ");
	scanf("%d", &b);
	
	printf("\npress 1. for adittion");
	printf("\n2. subtraction");
	printf("\n3. multiplication");
	printf("\n4. division");
	
	printf("\n enter your choice:");
	scanf(" %d" , &opr);
		
		
	  
	if(opr == 1)
	{
		printf("The sum of numbers is %d :", a+b);
	}  
	else if(opr == 2)
	{
		printf("The difference is %d:", a-b);
	}
    else if (opr == 3)                                      n
    {
	    printf("the product is: %d", a*b);
	}
	else if(opr == 4)
	{					 
	    printf("the number of division is: %d",a/b); 
	}
	else{
		printf("invalid operation");
	}
	      	
}