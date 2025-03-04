#include <stdio.h>
void main()
{
	// Write a program to find rank of a employee w.r.t to his salary
	// Salaries are in the range 50 to 200
	// if 50 -- 79 --> he/she is an employee
	//    80 --- 120 -->  HR  
	//    120 -- 180 --> manger
	// above 180 ---> CEO
	   
	int salary;
	salary= 70;
	printf("enter your salary");
	scanf("%d", &salary); 
	
    if(salary >=50 && salary<=79)
    {
    	printf("\n employe");
	}

    else if(salary >=80 && salary<120)
    {
    	
    printf("\n hr");
	}
    else if(salary >=120 && salary<180)
    {

    printf("\nmanager");
    }
    else if(salary>=180)
    {
	
    printf("\nceo");
    
    }
    else
    {
	
    printf("invalid");
    }
}
