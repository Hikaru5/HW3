/*
 * Reverse.c
 *
 *  Created on: Feb 19, 2019
 *      Author: hikar
 */

#include <stdio.h>

int reverse(int[] array, int size);

int main()
{
	int[] example = [1,2,3,4,5];
	int size = 5;
	int[] reverse = reverse(example,size);
	return 0;
}

int reverse(int[] array, int size)
{
	int[size] reverse;
	for(int i = 0; i<size; i++)
	{
		reverse[size-i]=array[i];
	}
	return &reverse;
}
