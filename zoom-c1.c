#include <stdio.h>
void main(){
	int x = 6;
	int y = 9;
	
	if ( 16 > 11 )
	{
		x++ ; // x = x + 1   
	}
	else
	{
		x-- ; // x = x - 1
	}
	// (condition) ? exp1 : exp2 
	(16 > 11) ? x++ : x--;
	
	printf("result : %d", x);
	
	x = 5;
	y = 10;
	
	if(x < y)
	{
		x += 2;   // x = x+2 
	}
	else
	{
		x*= 2;    // x = x*2
	}
	printf("\n \nresult : %d", x);
	// (condition) ? exp1 : exp2  ---> ternary operator
	(x < y)  ? x += 2 : x *= 2; 
	
}
