#include "main.h"
/**
 * rev_string - function that returns a reverse string
 * @s: character to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int a, b;

	b = 0;

	while (s[b] != '\0')
		a++;
	for (a = b - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
}
