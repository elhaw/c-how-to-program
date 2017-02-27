/*
 ============================================================================
 Name        : 2_33.c
 Author      : Abdulrahman
 Description : Create an applicationthat calculates your daily driving cost,
               so that you can estimate how much money could be saved by
               car pooling, which also has other advantages such as reducing
               carbon emissions and reducing traffic congestion.
Created on   : Feb 11 ,2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float miles,cost_gallon,miles_gallon,toll_day,total_cost_day,parking_day;
	printf("Enter Total miles per day in:");
	scanf("%f",&miles);
	printf("Enter cost of gasoline gallon in ($):");
	scanf("%f",&cost_gallon);
	printf("Enter average miles per gallon:");
	scanf("%f",&miles_gallon);
	printf("Enter Tolls per day in ($):");
	scanf("%f",&toll_day);
	printf("Enter parking fees per day in ($):");
	scanf("%f",&parking_day);
	//calculation formul
	total_cost_day =parking_day+ toll_day+(miles*miles_gallon*cost_gallon) ;
	//print result
	printf("Total cost per day in ($) is :%.3f $",total_cost_day);
	return 0;
}
