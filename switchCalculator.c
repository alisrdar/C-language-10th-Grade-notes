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
	switch(opr){
	   
	case '+':
    	printf("the sum of number is %d ", a+b);
        break;
    	
    case '-' :
	    printf("the diffrence of number  is %d",a-b);
	       break;
	       	
	case '*' :
	   printf("the multiplication of number  is %d", a*b);
	      break;
	      	
	case '/':
	   printf("the division of number is %d",a/b);
	      break;
	default :
	   printf("invalid");
	      break;
	}
}