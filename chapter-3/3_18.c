/*
 ==================================================================================
 Name        : 3_18.c
 Author      : Abdulrahman

 Description : One large chemical company pays its salespeople on a commission basis.
               The salespeople receive $200 per week plus 9% of their gross sales 
	       for that week.  For example, a salesperson who sells $5000 worth of-
	       chemicals in a week receives $200 plus 9% of $5000, or a total of $650.
               Develop a program that will input each salesperson’s gross sales for last
               week and will calculate and display that salesperson’s earnings.
Created on   :21 Feb,2017
 ===================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float chemical_sells,salary;
    printf("\nEnter sales in dollars (-1 to end):");
    scanf("%f",&chemical_sells);
    while (chemical_sells !=-1)
    {
        salary = ((chemical_sells*9)/100) + (200);
	printf("Salary is:$%.2f\n",salary);
        printf("\nEnter sales in dollars (-1 to end):");
	scanf("%f",&chemical_sells);
    }

    return 0;
}
