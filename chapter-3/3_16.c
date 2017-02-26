/*
 ==============================================================================
 Name        : 3_16.c
 Author      : Abdulrahman Elhaw
 Description : a program that will input the miles driven and gallons used 
               for each tankful. The program should calculate and display 
	       the miles per gallon obtained for each tankful. After processing
	       all input information,  the program should calculate and print 
	       the combined miles per gallon obtained for all tankfuls.  
 Created on  : 23 ,Feb 2017
 ==============================================================================
 */

#include <stdio.h>
int main ()
{
	int counter = 0;
	float gallons,miles,avg_per_gallon,tot=0;
	//getting input from user if gallons != -1


	while(gallons != -1)
	{
            printf("Enter the gallons used (-1 to end):");
	    scanf("%f",&gallons);
            if (gallons ==-1)
	    {
	        break;
	    }
	    printf("Enter the miles driven:");
	    scanf("%f",&miles);
	    counter++;
	    avg_per_gallon =  miles/gallons ;
	    printf("The miles/gallon for this tank was %f\n\n",avg_per_gallon);
	    tot += avg_per_gallon ;
	}

        if (gallons ==-1)
	{
            printf("The overall average miles/gallon %f",(float)tot/(counter));
	}

	return 0;
}
