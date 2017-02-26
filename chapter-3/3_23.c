/*
 ============================================================================
 Name        : 3_23.c
 Author      : Abdulrahman
 Copyright   : Your copyright notice
 Description : a pseudocode program and then a program that inputs
               a series of 10 non-negative numbers and determines
               and prints the largest of the numbers. Hint: Your program
               should use three variables as follows: counter:
               A counter to count to 10 (i.e., to keep track of how many numbers have
               been input and to determine when all 10 numbers have been processed)
               number: The current number input to the program largest:
               The largest number found so far
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int counter,number = 0 ;
    printf("Enter the number:");
    scanf("%d",&number);
    int largest = number  ;
    while (counter != 10)
    {
 	counter++;
	printf("Enter the number:");
	scanf("%d",&number);
	/*The algorithm assume the first number is the largest
	 * and if the second number is greater than the largest
	 * it will replace it
	 */
	if (number  > largest  )
	{
            largest = number;
	}
    }
    printf("counter is %d\n",counter);
    printf("largest Number is: %d",largest);
    
    return 0;
}
