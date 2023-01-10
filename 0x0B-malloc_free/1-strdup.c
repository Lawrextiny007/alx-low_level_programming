#include "main.h"
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string passed
 * @str: pointer to the duplicated string
 * Return: NULL if str is NULL
 * point to duplicated string if successful
 * NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *nstr;
	unsigned int len, i;

	/* check if str is NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	nstr = malloc(sizeof(char) * (len + 1));

	/*check if mallock was successful*/
	if (nstr == 0)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);

}

