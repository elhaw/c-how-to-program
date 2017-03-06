/*
 ============================================================================
 Name        : 3_31(d).c
 Author      : Abdulrahman
 Description : Dangling problem
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x = 5;
	int y = 7;
	if ( y == 7 )
	{
	    if ( x != 5 )
	    {
	        puts( "@@@@@" );
	    }
	    else
	    {
	    }
	        puts( "#####" );
	        puts( "$$$$$" );
	        puts( "&&&&&" );
	}
	return 0;
}
