/*
 ============================================================================
 Name        : 2_23.c
 Author      : Abdulrahman
 Description : program that reads an integer and determines and prints whether
               it’s odd or even
 Created on  : Feb 10, 2017
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x;
	printf("please enter integer number:");
	scanf("%d",&x);
	if (x % 2 == 0)
	{
		printf("The number [%d] is even ",x);
	}
	else
	{
		printf("The number [%d] is odd ",x);

	}

	return 0;
}
