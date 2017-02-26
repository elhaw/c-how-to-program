/*
 ============================================================================
 Name        : 3_26.c
 Author      : Abdulrahman
 Description :(Find the Two Largest Numbers) Using an approach similar to Exercise 3.23,
              find the two largest values of the 10 numbers
 Created on  : 22 Feb, 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number =0 ;
    int counter = 1;
    printf("Enter the number:");
    scanf("%d",&number);
    //assume the largest two numbers is the first number
    int largest = number ;
    int second_largest = number;
    while (counter != 3)
    {
	counter++;
	printf("Enter the number:");
	scanf("%d",&number);
	/*The algorithm store assume the first number is the largest
	 * and if the second number is greater than the largest it will replace it
	 * also check for the second largest
	 *
	 */
        if (number  > largest )
	{
	    second_largest  = largest;
	    largest = number;
	}
        else if (number < largest)
        {
            // This to avoid if numbers are arranges descending
	    if ((counter == 2))
	    {
	    	second_largest = number;
	    }
	    else if (number > second_largest)
	    {
	    	second_largest = number;
            }
	    //This to avoid if the user entered two equal numbers
	    else if (largest == second_largest)
            {
	    	second_largest = number;
	    }
	}
    }
	printf("counter is %d\n",counter);
	printf("largest Number is: %d\n",largest);
	printf("second largest Number is: %d\n",second_largest);



	return 0;
}
