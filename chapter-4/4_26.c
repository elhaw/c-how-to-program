/*
 ============================================================================
 Name        : 4_26.c
 Author      : Abdulrahman
 Description : (Calculating the Value ofπ) Calculate the value ofπ from the
               infinite series Print a table that shows the value of π approximated by
               one term of this series, by two terms, by three terms, and so on.
               How many terms of this series do you have to use before you first get 3.14?
                3.141? 3.1415? 3.14159?
Createdon    : 4 Mar, 2017		
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int terms = 0 ;
    //this is constant acording to the formula.
    const double dividend = 4 ;
    int divisor = 1 ;
    double coefficient  = 0 ;
    int number = 0 ;
    //specifing number of terms.
    printf("Please Enter number of terms you want:");
    scanf("%d",&number);
    for (terms = 1 ; terms <=number ; terms++)
    {
	// Calculating positive part of the equation.
        if (terms % 2 == 0)
 	{
 	    coefficient = + (dividend)/(divisor+2) + coefficient;
	}
	//calculating negative part of the equation.
	else
	{
	    coefficient = - (dividend)/(divisor+2) + coefficient;
	}
        //increment the divisor by so that it will give 1,3,5,7,8,9. and so on.
	divisor    = divisor+2 ;
	printf("The value of PI is :%f and terms number is :%d \n",4 + coefficient, terms);
	}
    return 0;
}
