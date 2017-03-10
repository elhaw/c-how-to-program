/*
 ============================================================================
 Name        : 3_45(a).c
 Author      : Abdulrahman
 Description : The factorial of a nonnegative integer n is written n!
               (pronounced “n factorial”) and is defined as follows:
              n! = n · (n - 1) · (n - 2) · … · 1 (for values of n greater than or equal to 1)
Created on   : 23 Feb ,2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number = 0 ;
    int factorial = 1 ;
    int counter = 0 ;
    float eular = 2 ;
    printf("Please Enter integer Number:");
    scanf("%d",&number);
    if (number == 0 )
    {
	printf("The factorial of [%d] is :%d",number,factorial);
    }
    else
    {
        while(number !=0)
	{
       	    factorial = factorial * number;
	    printf("%d\n",factorial);
	    --number;
	    ++counter;
	}
    }
    printf("\nThe factorial of [%d] is :%d",number+counter,factorial);
    return 0 ;
}
