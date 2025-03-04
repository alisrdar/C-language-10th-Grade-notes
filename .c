#include <stdio.h>
void main()
{
	// l + L + l + l = 4l
	// parameter of square = 4l
	
	int l, paramOfSquare;
	l = 10;
	
	paramOfSquare = 4*l;
	printf("parameter of square = %d", paramOfSquare);
	
	// parameter of rectangle = 2 * (l+w) 4, 10   l+w+l +w= 2l +2w = 2(l+w)
 	int w, paramofrectangle;
	l = 4;
	w = 10;
	
	paramofrectangle = 2*(l+w);
	printf("\n parameter of rectangle =%d" , paramofrectangle);
}