/*
 ============================================================================
 Name        : 2_23.c
 Author      : Abdulrahman
 Copyright   : Your copyright notice
 Description : a program that reads in three integers and then determines and
              prints the largest and the smallest integers in the group
 Created on  : Feb 10, 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x,y,z;
    printf("Enter three different integers:");
    scanf("%d %d %d",&x,&y,&z);
    if (x > y)
    {
        if ( x > z)
	{
	    printf("\nLargest is %d",x);
	    if (y > z)
	    {
	        printf("\nSmallest is %d",z);
	    }
	    else
	    {
	        printf("\nSmallest is %d",y);
	    }
	}
	else
	{
	    printf("\nLargest is %d",z);
	    if (x > y)
	    {
	        printf("\nSmallest is %d",y);
            }
            else
	    {
	    printf("\nSmallest is %d",x);
	    }
	}
    }
   else if ( y > x)
   {
       if (y > z)
       {
           printf("\nLargest is %d",y);
           if (x > z)
           {
	       printf("\nSmallest is %d",z);
	   }
	   else
	   {
	       printf("\nSmallest is %d",x);
	   }
       }
       else
       {
           printf("\nLargest is %d",z);
	   printf("\nSmallest is %d",x);
       }
   }

	return 0;
}
