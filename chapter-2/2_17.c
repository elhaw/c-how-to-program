/*
 ============================================================================
 Name        : 2_17.c
 Author      : Abdulrahman
 Description :  program that prints the numbers 1 to 4 on the same
                line with three different methods:
                a) Using one printf statement with no conversion specifiers.
                b) Using one printf statement with four conversion specifiers.
                c) Using four printf statements.
 Created on   : Feb 10, 2017

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("1 2 3 4\n");
	printf("%d %d %d %d\n",1,2,3,4);
	printf("1"),printf(" 2"),printf(" 3 "),printf("4 ");


	return 0;
}
