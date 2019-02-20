/*
 * Calc.c
 *
 *  Created on: Feb 18, 2019
 *      Author: hikar
 */
#include <stdio.h>

int main()
{
	int choice;
	float var1;
	float var2;
	while(choice!=4)
	{
		printf("Geometry Calculator\n    1. Calculate the Area of a Circle\n    "
				"2. Calculate the Area of a Rectangle\n    3. Calculate the Area of a Triangle\n    "
				"4. Quit\n\n    Enter your choice (1-4): ");
		fflush(stdout);
		scanf("%d", &choice);
		if(choice==1)
		{
			printf("Enter radius of the circle: ");
			fflush(stdout);
			scanf("%f", &var1);
			if(var1>=0)
			{
				var1 = (var1*var1)*3.14159;
				printf("The area of the circle is %.2f\n", var1);
			}
			else
				printf("Invalid input\n");
		}
		else if(choice==2)
		{
			printf("Enter the rectangle's height: ");
			fflush(stdout);
			scanf("%f", &var1);
			printf("Enter the rectangle's width: ");
			fflush(stdout);
			scanf("%f", &var2);
			if(var1>=0 && var2>=0)
			{
				double result = var1*var2;
				printf("The area of the rectangle is %.2f\n", result);
			}
			else
				printf("Invalid input\n");
		}
		else if(choice==3)
		{
			printf("Enter the triangle's height: ");
			fflush(stdout);
			scanf("%f",&var1);
			printf("Enter the triangle's width: ");
			fflush(stdout);
			scanf("%f",&var2);
			if(var1>=0 && var2>=0)
			{
				double result = var1*var2*.5;
				printf("The area of the triangle is %.2f\n", result);
			}
			else
				printf("Invalid input\n");

		}
		else if(choice==4)
		{
			printf("Program ended");
		}
		else
		{
			printf("Invalid input\n");
		}

	}
	return 0;
}

