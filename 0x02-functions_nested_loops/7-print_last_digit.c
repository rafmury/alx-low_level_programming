#include "main.h"

/**
 * print_last_digit - function that prints last digit
 *
 * @i: function parameter
 *
 * Return: always 0
 *
 */
int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 10)
	{
	k = k * -1;
	}
	_putchar(k + '0');
	return (k);
}
