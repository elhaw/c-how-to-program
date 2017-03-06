/*
 ============================================================================
 Name        : 3_31(b).c
 Author      : Abdulrahman
 Description : Dangling problem
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x = 5;
	int y = 8;
	if ( y == 8 )
	{
	    if ( x == 5 )
	    {
	        puts( "@@@@@" );
	    }
	    else
	    {
	        puts( "#####" );

	puts( "$$$$$" );
	puts( "&&&&&" );
	    }
	}
	return 0;
}
