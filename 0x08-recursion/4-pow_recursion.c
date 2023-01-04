#include "main.h"

/**
 * _pow_recursion - Write a function that raises the value of x to power of y
 * @x: value
 * @y: power
 * Return: x to the power of y
 * -1 if x < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
