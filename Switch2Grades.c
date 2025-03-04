#include <stdio.h>
void main()
{
	char grade;
	printf("Enter a Grade: ");
	scanf(" %c", &grade);
	
	switch(grade)
	{
		case 'A':
			printf("\nExcellent");
			break;
		case 'B':
			printf("\nWell done!");
			break;
		case 'C':
			printf("\nSatisfactory");
			break;
		case 'D':
			printf("\nImprove Next time");
			break;
		case 'F':
			printf("\nFailed");
			break;
		default:
			printf("\n Invalid Grade");
			break;	
	}   
}