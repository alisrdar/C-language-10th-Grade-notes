#include <stdio.h>
void main()
{
	int egg ;
	printf("enter number of eggs: ");
	scanf("%d" , &egg);
	switch(egg)
	{
		case 6:
			printf("half a dozen eggs");
			break;
		case 12:
			printf("Dozen eggs");
			break;
		default:
			printf("Eggs are not in dozen");
			break;
	}
	
}
