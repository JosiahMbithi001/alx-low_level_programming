#include "search_algos.h"

/**
 * linear_search - A Linear Search Algorithm
 * @array: Pointer to the First Element of the Array
 * @size: Number of Elements in array
 * @value: Value to Search For
 * Return: Value if located else -1 if value not present/
 * array is NULL
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	
	if (array == NULL)
		return -1;
	for(i = 0; i < size; i++)
		{	printf("Value checked at [%li] = [%i]\n",i, array[i]);
			if (array[i] == value)
				return i;	
		}
	return -1;
}
