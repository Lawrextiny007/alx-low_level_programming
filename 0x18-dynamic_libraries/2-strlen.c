#include "main.h"
/**
 * _strlen - functions that returns the lenght of a string
 * @s: check the code
 * Return: 0
 */

int _strlen(char *s)
{
	int count = 0;

	for (; *s++;)
		count++;
	return (count);
}
