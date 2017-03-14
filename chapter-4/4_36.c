/*
 ============================================================================
 Name        : 4_36.c
 Author      : Abdulrahman
 Description :  What does the following program segment do?
 Created on  : 4 Mar, 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,j,k = 0;
    for ( i = 1; i <= 5; ++i )
    {
        for ( j = 1; j <= 3; ++j )
        {
           /*
            * if you do not specify curly braces to the third
            * for loop it the compiler will consider the first statement
            * -which is (printf) here- is the related to for loop and other
	    * statements will be considered a part of the previous loop.
	    */
	    for ( k = 1; k <= 4; ++k )
	        //put curly braces around printf.
	         printf( "%s", "*" );
	    puts( "" );
	}
        puts( "" );
    }
    return 0;
}
