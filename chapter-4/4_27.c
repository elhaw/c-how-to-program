/*
 ============================================================================
 Name        : 4_27.c
 Author      : Abdulrahman
 Description : A right triangle can have sides that are all integers. The set of three
               integer values for the sides of a right triangle is called a Pythagorean triple.
               These three sides mustsatisfy the relationship that the sum of the squares of
               two of the sides is equal to  the square of the hypotenuse.
               Find all Pythagorean triples for side1, side2, and the hypotenuse all  no larger
               than 500. Use a triple-nested for loop that simply tres all possibilities
 Created on  : 4 Mar, 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int side1,side2,hypotenuse = 0 ;
    for(side1 = 1 ; side1 < 500 ; side1++)
    {
    	for(side2 = 1 ; side2 < 500 ; side2++)
     	{
    		for(hypotenuse = 1 ; hypotenuse < 500 ; hypotenuse++)
    		{
    			//the condition of right triangle.
    			if(( hypotenuse * hypotenuse ) == (side1 * side1) + (side2 * side2))
		        {
    				printf("side1 is :%4d, side2 is : %4d, hypotenuse is : %4d\n",side1,side2,hypotenuse);
		        }
    		}
   	    }

    }
	return 0;
}
