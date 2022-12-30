#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: character to be printed in reverse
 * Return: 0
 */

void print_rev(char *s)
{
	int a;
	int b;

	a = 0;
	while (s[a] != '\0')
		b++;

	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}

