/*
 ============================================================================
 Name        : 4_25.c
 Author      : Abdulrahman
 Description : a program that prints a table of the binary, octal and hexadecimal equivalents
               of the decimal numbers in the range 1 through 256. If you’re not familiar with these
               number systems, read Appendix C before you attempt this exercise.
               [Note: You can display an integer as an octal or hexadecimal value
                with the conversion specifiers %o and %X, respectively.]
 Created on  :14 , Mar 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

//function prototype
int decimal_to_binary (int number);


int main(void)
{
    puts("Binary\t\tDecimal\t\tOctal\t\tHexadecimal");
    int number = 1 ;
    while (number <= 256 )
    {
	//function calling to find binary equivilant
        decimal_to_binary (number);
	//printing Hexa, Octa , Decimal using specifier
        printf("\t%d\t\t%o\t\t%x",number,number,number);
        number++;
        printf("\n");
    }
    return 0;
}
//function definition
int decimal_to_binary (int number)
{
    int weight = 256 ;
    int counter = 0 ;
    while(counter != 9)
    {
        if (number >= weight )
        {
            printf("1");
            counter++;
    	    number = number - weight ;
	}
	else
	{
	    printf("0");
	    counter++;
        }
	weight = weight / 2;
    }
    return 0 ;
}
