#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string.
 * @s: lenght of string to be returned
 * Return: return the lenght of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}

