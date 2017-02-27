/*
 ============================================================================
 Name        : 3_37.c
 Author      : Abdulrahman
 Description : a program that prints 100 asterisks, one at a time. After
                 every tenth asterisk, your program should print a newline character
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int star = 1 ;
	for (star =1 ; star <= 100 ; star++)
	{
		printf("*");
		while (star % 10 == 0)
		{
			printf("\n");
			break;
		}
	}
	return 0;
}
