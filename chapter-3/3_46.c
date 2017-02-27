/*
 ============================================================================
 Name        : 3_46.c
 Author      : Abdulrahman
 Description : Use the web to determine the current world population and the
               annual world population growth rate. Write an application
               that inputs these values, then displays the estimated world population
                after one, two, three, four and five years.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float growth_rate = 1.2/100.0 ;
	float current_population =0;
	float new_poulation = 0 ;
	int current_year =0;
	int years = 0 ;
	int limit = 0 ;

	printf("Please Enter the current year :");
	scanf("%d",&current_year);

	printf("Please Enter  year to calculate population:");
	scanf("%d",&limit);

	printf("Please Enter the current  population:");
	scanf("%f",&current_population);

	printf("========================\n");
	for ( current_year ; current_year <= limit ; ++current_year)
	{
        years++;
	    new_poulation = current_population + (current_population * growth_rate * (years));
		printf("Estimated population at (%d) is :%0.f\n",current_year,new_poulation);
	}
	return 0 ;
}
