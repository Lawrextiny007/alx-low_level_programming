#include "main.h"
/**
 * reset_to_98 - function that updates a variable using pointer
 * @n: integer to be updated
 * Return: 0
 */

void reset_to_98(int *n)
{
	int n;
	int *p;

	p = &n;
	*p = 98;
	return (0);
}
