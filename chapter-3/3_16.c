/*
 ============================================================================
 Name        : 3_16.c
 Author      : Abdulrahman
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
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
		fflush(stdout);
		scanf("%f",&gallons);
		if (gallons ==-1)
			{
			break;
			}
		printf("Enter the miles driven:");
		fflush(stdout);
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
