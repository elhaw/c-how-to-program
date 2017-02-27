/*
 ============================================================================
 Name        : 3_44.c
 Author      : Abdulrahman
 Description : a program that reads three nonzero integers and determines and prints
               whether they could be the sides of a right triangle.
 Created on  : 22 Feb, 2107
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(void)
{
	//declare three variables
	int first,second,third = 0;
	//ask user to input three integer values
	printf("Enter the first integer  value:");
	scanf("%d",&first);
	printf("Enter the second integer value:");
	scanf("%d",&second);
	printf("Enter the third integer  value:");
	scanf("%d",&third);
	//assume the hypotenuse is the first and the other sides
	//are the second number and the third
	int hypotenuse  = first ;
	int medium = second ;
	int minimum = third ;

	if (second > first)
	{
		hypotenuse  = second;
		minimum = first;
		if (third >hypotenuse )
		{
			hypotenuse  = third ;
		}
		else if (third < hypotenuse )
		{
			medium = third;
		}
	}
	else if (second < first)
	{
		if (third > hypotenuse )
		{
			hypotenuse  = third ;
			minimum = second;
			medium  = first ;
		}
		else if (second < third)
		{
			minimum = second ;
			medium  = third ;
		}
	}
	else if (second == first)
	{
		if (third > first)
		{
			minimum = hypotenuse ;
			hypotenuse  = third ;
			medium  = first;
		}
	}
	printf("=====================================\n");
	//check if it will be right triangle or not
	if (sqrt(medium*medium + minimum*minimum ) == hypotenuse )
	{
		printf("The triangle is right one ");
	}
	else
	{
		printf("The triangle is not right");
	}
	return 0;
}
