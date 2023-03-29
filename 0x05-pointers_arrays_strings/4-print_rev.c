#include "main.h"

/**
 * print_rev - prints string in reverse
 * @s: function parameter
 * Return: Always 0
 */

void print_rev(char *s)
{
	int start = 0;

	while (s[start])
		start++;
	while (start--)
		_putchar(s[start]);
	_putchar('\n');
}
