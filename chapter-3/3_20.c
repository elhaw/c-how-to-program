/*
 ============================================================================
 Name        : 3_20.c
 Author      : Abdulrahman
 Description : program that will determine the gross pay for each of several
               employees. The company pays “straight time” for the first 40 hours worked
               by each employee and pays “time-and-a-half” for all hours worked
               in excess of 40 hours. You’re given a list of the employees of the company,
               the number of hours each employee worked last week and the hourly rate of
               each employee. Your program should input this information for each
               employee and should determine and display the employee's gross pay
Created on   :  21 Feb, 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(void)
{
	float work_hours,hours_rate,salary = 0;
	printf("Enter # of hours worked:");
	scanf("%f",&work_hours);

	while (work_hours != -1)
	{
		printf("Enter # hourly rate of the worker($00.00):");
		scanf("%f",&hours_rate);
		salary = work_hours * hours_rate;
		if (work_hours >40)
		{
			double excess_hours = work_hours -40 ;
			salary = (40 * hours_rate)+ (excess_hours * 1.5 *hours_rate);
		}
		printf("salary is $ %.2f\n\n",salary);
		printf("Enter # of hours worked:");
		scanf("%f",&work_hours);
	}
	return 0;
}
