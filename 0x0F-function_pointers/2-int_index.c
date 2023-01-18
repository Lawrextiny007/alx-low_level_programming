#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search int
 * @size: size of the array
 * @cmp: pointer to the comparing function
 * Return: index of the first element which the cmp func does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}