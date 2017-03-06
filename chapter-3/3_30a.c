/*
 ============================================================================
 Name        : 3_30(a).c
 Author      : Abdulrahman
 Description : Dangling else problem
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x =9 ;
	int y= 12;
	if (x < 10)
	{
	if (y > 10)
	{
		puts("*****");
	}
	else
	{
		puts( "#####" );
	}
		puts( "$$$$$" );
	}


	return 0;
}
