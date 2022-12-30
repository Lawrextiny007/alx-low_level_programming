#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: character to be printed in reverse
 * Return: 0
 */

void print_rev(char *s)
{
	int a, b;

	b = 0;

	while (s[b] != '\0')
		b++;

	for (a = b - 1; b >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}

