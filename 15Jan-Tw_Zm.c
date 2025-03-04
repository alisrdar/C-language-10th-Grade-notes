// declare 3 variables 1 of each fundamental datatype
// initialize these vaiables
#include <stdio.h>
void main(){


	//declare tha variable
	int x,y;
	char c;
	float f;
	int con,i;
	int Sum;
	
	Sum =4;  
	
	//initialize these variable
	// Assignment operator '='  --> value dena
	x=12;
	y=16;
//	printf("integar: x: %d y: %d\n ",x,y);
	
	x += 1; // x = x + 1
	y -= 2; // y = y - 2
	
	
//	printf("\nintegar: x: %d y: %d\n ",x,y);
	x *= 2; // x = x * 2 --> 24
	y /= 2; // y = y / 2 --> 8
	
	x %= 2; // x = x % 2
	
//	printf("\n\nintegar: x: %d y: %d\n ",x,y);
	
	c='z';
	f=01.26;
	
	// Print these variables
//	printf("integar: %d %d\n ",x,y);
//    printf("character: %c , \n ",c) ;
//    printf("decimal: %f  \n ", f);
//    
    x = 5;
    y = 5;
    
    if(x == y)
	{
    	printf("Yes \n");
	}
	else{
		printf("No \n");
	}
	// ternary operator
	// (Condition) ? exp1 : exp2
	char res = (x == 6) ? 'Y': 'N';
	   
    printf("\n res : %c ",res)  ;
 	   
    if (6 % 2 == 0)
    {
	 printf("\n even");
    }
    else{
	 printf("\n odd") ;
    }
	 
    res=(6 % 2 == 0) ? 'e': 'o';
     printf("\n ter: %c " ,res);
     
    // x= 5, y =5
    ((10 > 11) && (x == y))  ? printf("\n true") : printf("\n False");
    
    // 2(l+w) l 20, w 50
    
	
    printf("\n \n %d , \n" , 20,50) ? : printf("\nperimeter");
}             
  