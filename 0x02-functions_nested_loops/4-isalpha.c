#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: character to be checked
 * @i: integers to be checked
 * Return: 1 if character is a letter,0 otherwise
 */
int _isalpha(int i, char c)
{
	i = 0;

	if (c > 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
