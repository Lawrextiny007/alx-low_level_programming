#include "main.h"
#include <stdio.h>

/**
 * main - print the number from 1 to 100
 * 3 multiples print Fizz instead of the number
 * 5 print Buzz instead of number
 * 3 & 5 print FizzBuzz
 * Return: Always 0
 */

int main(void)
{
	for (int i = 1; i <= 100; ++i)
	{
		if (!(i % 15))
		{
			printf("%d FizzBuzz\n", i);
		} else if (!(i % 3))

		{
			printf("%d Fizz\n", i);
		} else if (!(i % 5))

		{
			printf("%d Buzz\n", i);
		} else

		{
			printf("%d\n", i);
		} return (0);
	}
}
