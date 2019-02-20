/*
 * Population.c
 *
 *  Created on: Feb 19, 2019
 *      Author: hikar
 */
#include <stdio.h>

int main()
{
	float pop;
	float birth;
	float death;
	int years;
	float result;
	printf("Enter the starting size of a population: ");
	fflush(stdout);
	scanf("%f",&pop);
	printf("Enter the birth rate of a population: ");
	fflush(stdout);
	scanf("%f",&birth);
	printf("Enter the death rate of a population: ");
	fflush(stdout);
	scanf("%f",&death);
	printf("Enter the number of years to display: ");
	fflush(stdout);
	scanf("%d",&years);
	for(int i = 0; i<years; i++)
	{
		result = pop+birth*pop-death*pop;
		pop = result;
	}
	printf("The new population size is %d\n",(int)result);
	return 0;
}

