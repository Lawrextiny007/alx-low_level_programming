#include "main.h"
#include <stdlib.h>
/**
 * create_array - functions that prints an array of char
 * @size: number element array
 * @c: char
 * Return: NULL if it fail or
 * pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	/* check if malloc was successful */

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}

