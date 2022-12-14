#include "main.h"

/**
 * factorial - Write a function that returns the factorial of a given number
 * @n: the integer to be factorised
 * Return: if n > 0 - print factorial, else print -1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);
	return (n * factorial(n - 1));
}
