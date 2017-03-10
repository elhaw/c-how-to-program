/*
 ============================================================================
 Name        : 3_45(c).c
 Author      : Abdulrahman
 Description : Write a program that reads a nonnegative integer and computes and prints
               its factorial.Write a program that estimates the value of the mathematical
               constant e to the power x. formula:
Created on   : 23 Feb ,2017
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//function prototype
int calc_factorial (int number);
int main(void)
{
    int terms = 20 ;
    float eular = 0;
    int counter =0 ;
    int power = 0 ;
    printf("Please Enter  the power  to calculate Eular:");
    scanf("%d",&power);
    //calculation formula
    //for ( counter = 0 ; counter < terms ;counter++ )
    //{
    //eular = eular + pow(power,counter)/calc_factorial(counter);
    //}
    //printing result
    //printf("Eular constant to base (%d) is equal to:%f\n",power,eular);
    /*Here we calculate e first using formula
	the find e to the power of some
     */
    for ( counter = 0 ; counter < terms ;counter++ )
    {
        eular = eular + 1./calc_factorial(counter);
    }
    //printing result
    printf("\nEular constant is equal to:%f\n",pow(eular,power));
    return 0 ;
}

//function definition
int calc_factorial (number)
{
    //check if number is zero
    int factorial = 1 ;
    if (number == 0 )
    {
  	return factorial;
    }
    //check if the number  > zero
    else
    {
 	while(number !=0)
        {
            //calculate factorial
	    factorial = factorial * number;
	    --number;
        }
    }
    return factorial ;
}
