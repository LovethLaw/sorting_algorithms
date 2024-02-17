#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * bubble_sort - A sorting algorthim
 * @array: array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	int i, j;
	int siz = size;

	for (i = 0; i < siz - 1 ; i++)
	{
		for (j = 0; j < siz - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp;

				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, siz);
			}
		}
	}
}

