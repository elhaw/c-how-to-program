/*
 ============================================================================
 Name        : 3_30(b).c
 Author      : Abdulrahman
 Description : Dangling else
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x = 9 ;
	int y = 11 ;
	if ( x < 10 )
	{
	if ( y > 10 )
	puts( "*****" );
	}
	else {
	puts( "#####" );
	puts( "$$$$$" );
	}
	return 0;
}
