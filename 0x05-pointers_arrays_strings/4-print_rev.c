#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: function parameter
 * Return: Always 0
 */

void print_rev(char *s)
{
	int longi;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
