#include "main.h"

/**
 * _isdigit - checks if a passed character is a digit from 0 through 9  or not
 * @c: input
 * Return: 1 if its a digit, 0 otherwise
 */

int _isdigit(int c)
{

if ((c >= 48) && (c <= 57))
return (1);
else
return (0);
}
