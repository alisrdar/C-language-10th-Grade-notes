#include <stdio.h>
void main()
{
	int egg ;
	printf("enter number of eggs: ");
	scanf("%d" , &egg);
	if(egg == 12)
	{
		printf("dozen ");
	} 
    else
	{
		printf("not dozen");
	}
}
