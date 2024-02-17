#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * selection_sort - select algorithm
 * @array: array to be sorted
 * @size: size of array
 */

void selection_sort(int *array, size_t size)
{
	int siz = size;
	int i, j, min_value, temp;

	for (i = 0; i < siz - 1; i++)
	{
		min_value = i;
		for (j = i + 1; j < siz; j++)
		{
			if (array[j] < array[min_value])
			{
				min_value = j;
			}
		}
		if (min_value != 1)
		{
			temp = array[i];
			array[i] = array[min_value];
			array[min_value] = temp;
			print_array(array, size);
		}
	}
}

