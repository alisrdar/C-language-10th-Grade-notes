// preprocessor directory and library
#include <stdio.h>
void main()
{
	printf("Hello world \n");
	
	// Variable declaration
	int x, y;
	char c;                
	float f;
	
	// Variable initialization/assignment
	x = 5;
	y = 7;
	c = 'A';
	f = 2.24;
	
	// doing declaration & intialization in the same step
	int z = 10;
	char alpha = 'a';
	float pi = 3.14;
	
	// printing the variables
	printf("Integers: %d , %d \n", x, y);
	printf("Charcters: %c \n",c);
	printf("decimal number: %f ", f);
	printf("Decimal: %f \n", pi);
	
	double dbl = 2.00088881;
	printf("%.10f ", dbl);
}