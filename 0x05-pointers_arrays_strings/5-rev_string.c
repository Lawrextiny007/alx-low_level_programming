#include "main.h"
/**
 * rev_string - function that returns a reverse string
 * @s: character to be reversed
 * Return: 0
 */

void rev_string(char *s)
{
	int a;
	int b;

	a = 0;
	while (s[a] != '\0')
		a++;
	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
}
