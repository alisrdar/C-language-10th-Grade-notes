#include <stdio.h>
void main()
{
	int n ;
	printf("Enter a number: ");
	
	scanf("%d", &n);
	
	switch(n)
	{
		case 1:
			printf("Addition");
			break;
		case 2:
			printf("Subtraction"); 
	   	    break;
		case 3:
			printf("division");
			break;
		case 4:
			printf("multiplication");
		default:
			printf("invalid");
	}
	
}