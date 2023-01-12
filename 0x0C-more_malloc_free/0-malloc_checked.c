#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked -  a function that allocates memory using malloc
 * @b: integer that returns a pointer
 * Return: pointer to the allocated memory
 * if malloc fails, terminate and return status value of 98
 */
void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
