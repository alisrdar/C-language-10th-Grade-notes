#include <stdio.h>
void main()
{
	printf("hello world \n");
	printf("bilal \n"); 
	printf("habibi"); 
  
    //deaclare a variable
    // datatype varname ;
    
    int x,y;
    float deci, mal;
    char alpha, beta;
    
    // variable assignment 
    x = 16;
	y = 2;
	deci = 2.34;
	mal = 3.1;
	alpha = 'a';
	beta = 'b';
	
	/*
    printf("\nintegers %d:\n", x);
    printf("%d", y);
    printf("\n Decimal: %f %f", deci, mal);
    printf("\n character: %c %c ",alpha, beta);    
    */                                                     
    
    int sum = x + y;
    int prod = x * y;
    int diff =  x - y;
    int div = x / y;
	int rem = x % y;
    
    printf("\n \n sum :%d", sum);
    printf("\n product:  %d \n Difference: %d \n Division: %d \n Remainder: %d ", prod, diff, div, rem);
}