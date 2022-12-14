#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: this is a destiny
 * @src: this is the copy
 * Return: copy
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
