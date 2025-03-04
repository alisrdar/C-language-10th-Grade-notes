#include <stdio.h>
void main()
{
	 int a,b;
	 char opr;
	 printf ("enter a number: ");   
	 scanf("%d", &a);
	 printf ("enter another number: ");
	 scanf("%d", &b);
	           
	 printf("\nchose an operation +,-,*,/ ");
	 scanf(" %c" , &opr);   
	  
	if(opr == '+')
	{
		printf("The sum of numbers is %d :", a+b);
	}  
	else if(opr == '-')
	{
		printf("The difference is %d:", a-b);
	}
    else if (opr =='*')
    {
	    printf("the Product is: %d", a*b);
	}
	else if(opr == '/')
	{					 
	     printf("the result of division is: %d",a/b); 
	}
	else{
		   printf("invalid operation");
	}
	      	
}